# Benchmark the creation of a set of unique numbers

To run this example:
```
mkdir build
cd build
conan install ..
cmake -DCMAKE_BUILD_TYPE=RELEASE ..
make
./bin/benchmark_unique_ints
```