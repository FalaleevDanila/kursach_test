#! /bin/sh

set -ex

./scripts/compile.sh

export GTEST_COLOR=1
cmake --build .build --target test -- ARGS="--verbose"
