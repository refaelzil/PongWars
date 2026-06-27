#include "Vpong_wars_top.h"
#include "verilated.h"
#include <cstdio>
#include <cstring>

#define H_VISIBLE       640
#define V_VISIBLE       480
#define H_TOTAL         832   // matches VGASyncGen: 640+24+40+128
#define V_TOTAL         520   // matches VGASyncGen: 480+9+3+28
#define CLK_HALF_PERIOD  16

static uint8_t framebuf[V_TOTAL][H_TOTAL][3];

void save_bmp(const char* filename) {
    int w = H_VISIBLE, h = V_VISIBLE;
    int row_stride = (w * 3 + 3) & ~3;
    int pixel_data_size = row_stride * h;
    int file_size = 54 + pixel_data_size;

    uint8_t header[54] = {};
    header[0]='B'; header[1]='M';
    header[2]= file_size       & 0xFF;
    header[3]=(file_size >>  8)& 0xFF;
    header[4]=(file_size >> 16)& 0xFF;
    header[5]=(file_size >> 24)& 0xFF;
    header[10]=54;
    header[14]=40;
    header[18]= w      & 0xFF;
    header[19]=(w >> 8)& 0xFF;
    header[22]= h      & 0xFF;
    header[23]=(h >> 8)& 0xFF;
    header[26]=1;
    header[28]=24;

    FILE* f = fopen(filename, "wb");
    fwrite(header, 1, 54, f);
    uint8_t row[row_stride];
    for (int y = h - 1; y >= 0; y--) {
        memset(row, 0, row_stride);
        for (int x = 0; x < w; x++) {
            row[x*3+0] = framebuf[y][x][2];
            row[x*3+1] = framebuf[y][x][1];
            row[x*3+2] = framebuf[y][x][0];
        }
        fwrite(row, 1, row_stride, f);
    }
    fclose(f);
    printf("Saved: %s\n", filename);
}

int main(int argc, char** argv) {
    VerilatedContext* ctx = new VerilatedContext;
    Vpong_wars_top* top = new Vpong_wars_top{ctx};

    int hpos = 0, vpos = 0;
    int frame = 0;
    bool prev_vsync = 1;  // start high since vsync is active-low
    int margin_H = (H_TOTAL - H_VISIBLE) ;
    int margin_V = (V_TOTAL - V_VISIBLE) ;
    long long max_cycles = (long long)H_TOTAL * V_TOTAL * 4;

    for (long long i = 0; i < max_cycles; i++) {
        top->clk = 0;
        top->rst = (i < 10) ? 1 : 0;   // drive reset for first 10 cycles
        top->eval();
        ctx->timeInc(CLK_HALF_PERIOD);

        top->clk = 1;
        top->eval();
        ctx->timeInc(CLK_HALF_PERIOD);

        bool vsync = top->vsync;

        // vsync is active-low: new frame on falling edge (1->0)
        if (!vsync && prev_vsync) {
            if (frame > 0) {
                char fname[64];
                snprintf(fname, sizeof(fname), "frame_%03d.bmp", frame);
                save_bmp(fname);
                memset(framebuf, 0, sizeof(framebuf));
            }
            frame++;
            hpos = 0; vpos = 0;
        }
        prev_vsync = vsync;

        if (hpos > margin_H && vpos > margin_V) {
            framebuf[vpos-margin_V][hpos-margin_H][0] = ((top->rrggbb >> 4) & 0x3) * 85;
            framebuf[vpos-margin_V][hpos-margin_H][1] = ((top->rrggbb >> 2) & 0x3) * 85;
            framebuf[vpos-margin_V][hpos-margin_H][2] = ((top->rrggbb >> 0) & 0x3) * 85;
        }

        hpos++;
        if (hpos >= H_TOTAL) {
            hpos = 0;
            vpos++;
            if (vpos >= V_TOTAL) vpos = 0;
        }
    }

    delete top;
    delete ctx;
    return 0;
}