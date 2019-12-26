#! /bin/sh

set -ex

cmake -H. -B .build -DCMAKE_BUILD_TYPE=Debug -DBUILD_COVERAGE=On
cmake --build .build
