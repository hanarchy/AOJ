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
#include <sstream>
#include <array>

#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
typedef long long int ll;
int main() {
  ll n, m, nn, tmp;
  int d1[4] = {0, 1, 2, 1};
  int d2[4] = {1, 0, 1, 2};
  while ((cin >> n && n) && (cin >> m && m)) {
    vector<stack<ll>> stk(3);
    queue<vector<stack<ll>>> que;
    queue<pair<ll, ll>> num;
    rep(i, 3) {
      cin >> nn;
      if (nn == 0) stk[i].push(0);
      else {
        rep(j, nn) {
          cin >> tmp;
          stk[i].push(tmp);
        }
      }
    }
    que.push(stk);
    num.push(make_pair(0, -1));
    bool flag = false;
    while (que.size()) {
      if (num.front().first > m)break;
      vector<stack<ll>> vv(que.front());
      que.pop();
      if ((vv[0].top() == 0 && vv[1].top() == 0) || (vv[1].top() == 0 && vv[2].top() == 0)) {
        flag = true;
        break;
      }
      pair<ll, ll> nums = num.front();
      num.pop();

      rep(i, 4) {
        if (i == 1 && nums.second == 0)continue;
        if (i == 0 && nums.second == 1)continue;
        if (i == 2 && nums.second == 3)continue;
        if (i == 3 && nums.second == 2)continue;
        if (vv[d2[i]].top() != 0) {
          if (vv[d2[i]].top() >= vv[d1[i]].top()) {
            if (vv[d1[i]].top() == 0) vv[d1[i]].pop();
            vv[d1[i]].push(vv[d2[i]].top());
            if (vv[d2[i]].size() == 1) {
              vv[d2[i]].pop();
              vv[d2[i]].push(0);
            } else vv[d2[i]].pop();

            que.push(vv);
            if (vv[d2[i]].top() == 0) vv[d2[i]].pop();

            vv[d2[i]].push(vv[d1[i]].top());
            if (vv[d1[i]].size() == 1) {
              vv[d1[i]].pop();
              vv[d1[i]].push(0);
            } else {
              vv[d1[i]].pop();
            }
            num.push(make_pair(nums.first + 1, i));
          }
        }
      }
    }
    if (flag)
      cout << num.front().first << endl;
    else
      cout << -1 << endl;

  }

  return 0;
}