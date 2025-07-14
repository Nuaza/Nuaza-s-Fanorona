#!/usr/bin/env bash
set -e
BUILD_DIR=build
cmake -B $BUILD_DIR -DCMAKE_BUILD_TYPE=Release
cmake --build $BUILD_DIR -j$(nproc)