#include <unordered_set>

static void InsertIntoUnorderedSet(benchmark::State& state) {
  std::unordered_set<int> c;

  for (auto _ : state) {
    c.clear();
    for(int i = 0; i < INSERTIONS; ++i) {
      c.insert(dis(gen));
    }
  }
}
BENCHMARK(InsertIntoUnorderedSet);
