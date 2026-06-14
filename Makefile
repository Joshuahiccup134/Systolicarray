# ==============================================
# Makefile for Systolic Array
# ==============================================

# Project settings
TOP_MODULE_TESTBENCH      = tb_systolicarray_2x2
SRC_DIR         = src
TB_DIR          = testbench
OBJ_DIR         = obj_dir

# Source files
SRC_FILES = $(SRC_DIR)/Systolic_Array.sv $(SRC_DIR)/MAC_unit.sv $(TB_DIR)/tb_systolicarray_2x2.sv

# Tools
VERILATOR       = verilator_bin
VERILATOR_FLAGS = --binary --build --trace --top-module $(TOP_MODULE_TESTBENCH) -Mdir $(OBJ_DIR) -o V$(TOP_MODULE_TESTBENCH)
GTKWAVE         = gtkwave

# Default target
all: sim

# Build and run simulation
sim: build run

build:
	$(VERILATOR) $(VERILATOR_FLAGS) $(SRC_FILES)

# Run exe file
run:
	./$(OBJ_DIR)/V$(TOP_MODULE_TESTBENCH)

# Convert VCD to FST (smaller and faster for GTKWave)
convert:
	vcd2fst tb_systolicarray_2x2.vcd tb_systolicarray_2x2.fst

# Open GTKWave
trend:
	$(GTKWAVE) tb_systolicarray_2x2.fst config_1.gtkw

# Clean generated files
clean:
	rm -rf $(OBJ_DIR) *.vcd *.fst

# Build, run, convert vcd to fst file and open trend with config_1
config: sim convert trend

.PHONY: all sim build run convert trend clean config