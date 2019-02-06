#include <benchmark/benchmark.h>

#include <algorithm>
#include <random>

//
// Let's find the fastest way to get a set of unique integers from a set that contains duplicate integers.
// http://quick-bench.com
//

using std::begin;
using std::end;

const size_t INSERTIONS = 10;

std::random_device rd; 
std::mt19937 gen(rd());
std::uniform_int_distribution<> dis(0, 0.9*INSERTIONS);

#include "vector.cpp"

#include "unordered_set.cpp"

#include "set.cpp"

BENCHMARK_MAIN();
