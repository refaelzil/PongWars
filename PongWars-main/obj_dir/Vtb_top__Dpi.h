// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTB_TOP__DPI_H_
#define VERILATED_VTB_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/tony/vga-monitor-0.4.0-linux-x86_64/vga_monitor.sv:51:34
    extern void vga_monitor_close(void* handle);
    // DPI import at /home/tony/vga-monitor-0.4.0-linux-x86_64/vga_monitor.sv:42:34
    extern void vga_monitor_event(void* handle, double t, unsigned char r, unsigned char g, unsigned char b, int hsync, int vsync);
    // DPI import at /home/tony/vga-monitor-0.4.0-linux-x86_64/vga_monitor.sv:41:37
    extern void* vga_monitor_open(const char* name);

#ifdef __cplusplus
}
#endif

#endif  // guard
