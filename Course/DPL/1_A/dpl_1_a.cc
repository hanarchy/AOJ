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

int main(){
  ll n, m;
  cin >> n >> m;
  vector<ll> c(m);
  rep(i, m) cin >> c.at(i);
  vector<ll> dp(n+1, 1e9);dp.at(0)=0;
  rep(i, m) rep(j, n-c[i]+1) dp.at(j+c.at(i))=min(dp.at(j+c.at(i)), dp.at(j)+1);

  cout << dp.at(n) << endl;
  return 0;
}