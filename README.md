# Parameterizable N X N Systolic Array for General Matrix Multiplication

A parameterizable N × N systolic array implementation exploring different dataflow architectures for dense General Matrix Multiplication (GEMM). Designed while studying hardware accelerators for Artificial Intelligence (AI).

## Overview

This project implements a **2x2 systolic array** for matrix multiplication (`C = A × B`) with signed 16-bit inputs, using partial product decomposition and 32-bit accumulation. The design focuses on functional correctness, power efficiency through gating, and understanding dataflow trade-offs relevant to AI accelerators and neuromorphic computing.

## Variants Implemented

| Variant                  | Data Movement                     | Accumulation       | Key Characteristics                        | Correct GEMM? | Power Gating |
|--------------------------|-----------------------------------|--------------------|--------------------------------------------|---------------|--------------|
| **Output-Stationary** (Main) | A → Right, B ↓ Down              | Local (per PE)     | Simple wiring, straightforward control     | Yes           | Yes          |
| **Weight-Stationary**    | A → Right, B (Stationary)            | Local (Accumulation bus)     | Stationary weights (B preloaded)           | Partial*      | Yes          |

\* Weight-stationary variant demonstrates stationary weights but requires matrix transpose for standard GEMM output ordering.

## Synthesis & Power Analysis (Sky130 PDK)

### Implementation Details
- **Toolchain**: LibreLane (OpenROAD-based RTL-to-GDSII flow)
- **PDK**: Sky130A (130nm)
- **Target Frequency**: 66.7 MHz
- **Synthesis**: Yosys + OpenROAD
- **Design**: 2 × 2, 16-bit Weight-stationary systolic array with power gating and product decomposition

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
| **Cell Area**            | 201,493 µm²             | Core logic only |
| **Total Power**          | 14.56 mW               | @ 66.7 MHz, typical corner |
| **Leakage Power**        | 108.63 nW               | Acceptable |
| **Total Switching Power**        | 5.48 mW              | Dominated by data movement |
| **Worst Setup Slack** | +0.54 ns              | Meets timing comfortably |
| **Max Frequency**        | ~69.16 MHz             | Post-route (estimated) |
| **Design Instance Count**           | 36,470 gates          | Acceptable |
| **Design Instance Utilization**           | 63.47 %          | Good |

**Power Breakdown by Group**:
- Sequential: ~28.5%
- Combinational: ~54.4%
- Clock: ~17.1%

### Power Gating Impact
- With **diagonal wavefront enable gating**: ~16.5% total power reduction during idle cycles compared to always-enabled design.
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
- On-chip SRAM input buffers
- Optimised design for possible tape-out
- Detailed PPA (Power-Performance-Area) comparison between variants

## License

This project is licensed under the **Apache License 2.0** - see the [LICENSE](LICENSE) file.

---