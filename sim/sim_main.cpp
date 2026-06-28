#include "Vtb_top.h"
#include "verilated.h"

#define RESET_CYCLES 10

int main(int argc, char** argv) {
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    Vtb_top* top = new Vtb_top{ctx};

    for (long long i = 0; !ctx->gotFinish(); i++) {
        top->clk_25MHz = i & 1;
        top->rst       = (i < (RESET_CYCLES * 2)) ? 1 : 0;
        top->eval();
        ctx->timeInc(1);
    }

    delete top; delete ctx;
    return 0;
}
