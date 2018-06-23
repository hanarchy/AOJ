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

struct nimotsu{
  ll v;
  ll w;
};

int main(){
  ll n, w;
  cin >> n >> w;
  vector<nimotsu> vec(n);
  rep(i, n) cin >> vec.at(i).v >> vec.at(i).w ;
  vector<ll> dp(w+1, 0);
  rep(i, n) rep(j, w-vec.at(i).w+1) dp.at(j + vec.at(i).w) = max(dp.at(j+vec.at(i).w), dp.at(j)+vec.at(i).v);
  cout << dp.at(w) << endl;

  return 0;
}