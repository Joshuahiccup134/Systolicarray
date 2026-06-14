# Parameterizable N X N Systolic Array for Matrix Multiplication

A parameterizable N × N systolic array implementation exploring different dataflow architectures for dense General Matrix Multiplication (GEMM). Designed while studying hardware accelerators for AI.

## Overview

This project implements a **2x2 systolic array** for matrix multiplication (`C = A × B`) with signed 16-bit inputs and 32-bit accumulation. The design focuses on functional correctness, power efficiency through gating, and understanding dataflow trade-offs relevant to AI accelerators and neuromorphic computing.

## Variants Implemented

| Variant                  | Data Movement                     | Accumulation       | Key Characteristics                        | Correct GEMM? | Power Gating |
|--------------------------|-----------------------------------|--------------------|--------------------------------------------|---------------|--------------|
| **Output-Stationary** (Main) | A → Right, B ↓ Down              | Local (per PE)     | Simple wiring, straightforward control     | Yes           | Yes          |
| **Weight-Stationary**    | A → Right (broadcast)            | External     | Stationary weights (B preloaded)           | Partial*      | Yes          |

\* Weight-stationary variant demonstrates stationary weights but requires matrix transpose for standard GEMM output ordering.

## Synthesis & Power Analysis (Sky130 PDK)

### Implementation Details
- **Toolchain**: LibreLane (OpenROAD-based RTL-to-GDSII flow)
- **PDK**: Sky130A (130nm)
- **Target Frequency**: 55.6 MHz (conservative)
- **Synthesis**: Yosys + OpenROAD
- **Design**: 2 × 2, 16-bit Output-stationary systolic array

## How to Run

### Prerequisites
- [OSS CAD Suite](https://github.com/YosysHQ/oss-cad-suite-build/releases) (includes Verilator + GTKWave)
- Git

### Quick Run

```bash
# Clone the repository
git clone https://github.com/Joshuahiccup134/Systolicarray
cd Systolicarray

# Run simulation (build + run)
make

# Open waveform in GTKWave
make trend

# Build, run, convert vcd to fst file and open trend with config_1
make config
```

### Results

| Metric                    | Value                  | Notes |
|--------------------------|------------------------|-------|
| **Cell Area**            | 182,491 µm²             | Core logic only |
| **Total Power**          | 4.57 mW               | @ 55.6 MHz, typical corner |
| **Leakage Power**        | 98.74 nW               | Acceptable |
| **Total Switching Power**        | 1.60 mW              | Dominated by data movement |
| **Worst Setup Slack** | +0.34 ns              | Meets timing comfortably |
| **Max Frequency**        | ~56.64 MHz             | Post-route (estimated) |
| **Design Instance Count**           | 34,801 gates          | Acceptable |

**Power Breakdown by Group**:
- Sequential: ~36.1%
- Combinational: ~35.0%
- Clock: ~28.9%

### Power Gating Impact
- With **diagonal wavefront enable gating**: ~20.1% total power reduction during idle cycles compared to always-enabled design.
- Demonstrates effectiveness of fine-grained clock gating in systolic architectures.

**Note**: These are preliminary results from a 2×2 array, not yet fully optimised. Future scaling to larger arrays (8×8 / 16×16) with proper clock tree and power planning is planned.

## Key Findings

- Dataflow choice significantly impacts power, bandwidth, and control complexity.
- Power gating aligned with systolic wavefronts prominently improves power efficiency.
- Importance of proper pipeline implementation in systolic array designs.
- Implementation of micro-architectural optimizations (e.g, Partial product decomposition) greatly improved timing closure in the design, leading to the increase in maximum frequency.
- Real hardware numbers (via LibreLane + Sky130) provide critical insight beyond simulation.

## Future Work

- Larger array scaling
- Results for Weight-stationary variant with correct GEMM mapping
- On-chip SRAM input buffers
- Optimised design for possible tape-out
- Detailed PPA (Power-Performance-Area) comparison between variants

---
