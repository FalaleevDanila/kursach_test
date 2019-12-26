#! /bin/sh

set -ex

./scripts/tests.sh

cmake --build .build --target gcov
cmake --build .build --target test
gcovr -r  .
