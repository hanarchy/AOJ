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
  ll n ;
  cin >> n;
  vector <ll> a(n);
  rep(i, n) cin >> a.at(i);
  vector<ll> dp(n, 1);

  ll res=0;

  rep(i, n){
    rep(j, i){
      if(a.at(i) > a.at(j)) dp.at(i) = max(dp.at(i), dp.at(j) +1);
    }
    res = max(res, dp.at(i));
  }

  cout << res << endl;



  return 0;
}