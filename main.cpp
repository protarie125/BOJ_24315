#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll a0, a1, c1, c2, n0;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> a1 >> a0 >> c1 >> c2 >> n0;

  auto ans = true;
  for (auto n = n0; n < 100000; ++n) {
    const auto& left = c1 * n;
    const auto& f = a1 * n + a0;
    const auto& right = c2 * n;

    if (left <= f && f <= right) continue;

    ans = false;
    break;
  }

  cout << (ans ? 1 : 0);

  return 0;
}