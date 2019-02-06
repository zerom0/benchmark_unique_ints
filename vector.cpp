#include <vector>

static void InsertIntoVector(benchmark::State& state) {
  std::vector<int> c;
  c.reserve(INSERTIONS);

  for (auto _ : state) {
    c.clear();
    for(int i = 0; i < INSERTIONS; ++i) {
      c.push_back(dis(gen));
    }
    std::sort(begin(c), end(c));
    c.erase(std::unique(begin(c), end(c)), end(c));
  }
}
BENCHMARK(InsertIntoVector);
