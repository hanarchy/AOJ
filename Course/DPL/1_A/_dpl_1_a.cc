#include <cmath>
#include <cstdio>

#include <stack>
#include <queue>
#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <numeric>
#include <string>
#include <array>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
typedef long long int ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<ll> c(m);
  for (int j = 0; j < m; ++j) {
    cin >> c[j];
  }
  sort(c.rbegin(), c.rend());
  int cnt = 0, i = 0;
  queue<vector<uint8_t>> maii;
  queue<int> isd;
  queue<int> nokori;
  vector<uint8_t> vv(m);
  fill(all(vv),0);
  maii.push(vv);
  isd.push(0);
  nokori.push(n);

  int next, isds, nokoris;
  while (1) {
    vector<uint8_t> v{maii.front()};
    maii.pop();
    isds = isd.front();
    isd.pop();
    nokoris = nokori.front();
    nokori.pop();
    for (int j = isds; j < m; ++j) {
      if (nokoris / c[j] > 0) {
        ++v[j];
        next = nokoris - c[j];
        if (next == 0) {
          int cnt = 0;
          for (auto i : v) cnt += i;
          cout << cnt << endl;
          return 0;
        }
        maii.push(v);
        isd.push(j);
        nokori.push(next);
        --v[j];
      }
    }
  }
  return 0;
}