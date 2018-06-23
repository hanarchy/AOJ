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
  vector<ll> s;
  ll n, sc;
  while(cin >> n && n){
    s.clear();
    rep(i, n) {
      cin >> sc;
      s.push_back(sc);
    }
    sort(all(s));
    ll sum=0;
    for (int j = 1; j < s.size()-1; ++j) sum += s.at(j);
    auto sol = static_cast<ll>(sum/(s.size()-2));
    cout << sol << endl;
  }

  return 0;
}