#include <set>

static void InsertIntoSet(benchmark::State& state) {
  std::set<int> c;

  for (auto _ : state) {
    c.clear();
    for(int i = 0; i < INSERTIONS; ++i) {
      c.insert(dis(gen));
    }
  }
}
BENCHMARK(InsertIntoSet);
