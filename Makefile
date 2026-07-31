# ----- Config -----
TOP        := tb_top
RTL_DIR    := rtl
SIM_DIR    := sim
OBJ_DIR    := obj_dir

RTL_SOURCES := \
	$(RTL_DIR)/pong_wars_top.sv \
	$(RTL_DIR)/SquareObject.sv \
	$(RTL_DIR)/Border.sv \
	$(RTL_DIR)/vga_monitor.sv \
	$(RTL_DIR)/vga_mover.sv \
	$(RTL_DIR)/VGASyncGen.sv \
	$(RTL_DIR)/tb_top.sv

CPP_SOURCES := $(SIM_DIR)/sim_main.cpp

VERILATOR      := verilator
VERILATOR_FLAGS := \
	-Wall -Wno-fatal \
	--cc --exe --build \
	--trace \
	-I$(RTL_DIR) \
	--top-module $(TOP) \
	-CFLAGS "-std=c++17 -O2"

# ----- Targets -----
.PHONY: all sim run clean

all: sim

sim:
	$(VERILATOR) $(VERILATOR_FLAGS) $(RTL_SOURCES) $(CPP_SOURCES)

run: sim
	./$(OBJ_DIR)/V$(TOP)

clean:
	rm -rf $(OBJ_DIR) *.fst *.vcd