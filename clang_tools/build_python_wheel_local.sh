#!/usr/bin/env bash
set -e


rm -rf build
mkdir build
cd build
cmake -G Ninja .. -DCMAKE_BUILD_TYPE=Release \
                  -DCMAKE_CXX_FLAGS="-static-libgcc -static-libstdc++ -fPIC" \
                  -DCMAKE_EXE_LINKER_FLAGS="-static-libgcc -static-libstdc++" \
                  -DCMAKE_SHARED_LINKER_FLAGS="-static-libgcc -static-libstdc++" \
                  -DCMAKE_MODULE_PATH="$CMAKE_MODULE_PATH"
ninja 
cd ..
cp build/bin/global-detector python_src/clang_tools/
cp setup.py.in setup.py
sed -i "s~THIS_DIR~$(pwd)~g" setup.py
python -m build
rm setup.py
