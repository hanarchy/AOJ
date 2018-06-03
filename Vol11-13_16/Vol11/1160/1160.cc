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

constexpr int max_w = 50;
constexpr int max_h = 50;
int fields[50][50];

void dfs(const int &x, const int &y, const int &w, const int &h) {
  fields[y][x] = 0;
  for (int dx = -1; dx <= 1; ++dx) {
    for (int dy = -1; dy <= 1; ++dy) {
      int nx = x + dx, ny = y + dy;
      if (0 <= nx && nx < w && 0 <= ny && ny < h && fields[ny][nx] == 1)
        dfs(nx, ny, w, h);
    }
  }
}

int main() {
  int w, h, c;
  while (true) {
    cin >> w >> h;
    if (w == 0 && h == 0)
      break;
    rep(i, h) {
      rep(j, w) {
        cin >> c;
        if (c == 1) fields[i][j] = 1;
        else fields[i][j] = 0;
      }
    }
    int res = 0;
    rep(i, h) {
      rep(j, w) {
        if (fields[i][j] == 1) {
          dfs(j, i, w, h);
          ++res;

        }
      }
    }
    cout << res << endl;
  }
}