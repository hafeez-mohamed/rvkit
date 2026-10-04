# rvkit

[![CI](https://github.com/hafeez-mohamed/rvkit/actions/workflows/ci.yml/badge.svg)](https://github.com/hafeez-mohamed/rvkit/actions/workflows/ci.yml)

A C++20 workbench that grows into a RISC-V instruction-set simulator, pipeline and cache models.

## Build and test

    cmake --preset debug
    cmake --build --preset debug
    ctest --preset debug

Swap `debug` for `asan` to build with AddressSanitizer and UBSan.

## Layout

- `src/` — sources
- `tests/` — GoogleTest unit tests