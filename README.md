# Systolic Array Accelerator for Matrix Multiplication

## Overview
2×2 systolic array implementations for dense GEMM, exploring different dataflow variants.

## Variants

1. **Output-Stationary** (default branch / v1.0)
   - Internal accumulation per PE
   - A flows right, B flows down
   - Power gating implemented
   - Verified: C = [19 22; 43 50] for test inputs

2. **Weight-Stationary** (variant/weight-stationary)
   - B preloaded into PEs (stationary weights)
   - Only A streams right, horizontally
   - Accumulations flow downwards
   - (In progress, polishing final code)

## Key Features
- Signed 16-bit inputs, 32-bit accumulation
- Global + per-PE power gating
- Skewed input feeding for wavefront propagation

## Results
- Correct matrix multiplication verified via simulation in gtkwave
- Waveforms available in /obj_dir/ directory

## How to Run
...
