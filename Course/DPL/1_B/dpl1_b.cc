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
#include <functional>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
typedef long long int ll;

struct cab{
  ll v;
  ll w;
};


ll rec(const ll &i, const ll &w, const vector<cab> &vec, const ll &n, vector<vector<int>> & memos ){
  if (memos[i][w]>0) {
    return memos[i][w];
  }
  ll res;
  if (i == n) {
    res = 0;
  } else if (w < vec[i].w) {
    res = rec(i + 1, w, vec, n, memos);
  } else {
    res = max(rec(i + 1, w,vec,n, memos), rec(i+1,w-vec[i].w,vec,n, memos)+vec[i].v);
  }
  return memos[i][w]=res;
}


int main(){

  ll n, ew, v, w;
  cin >> n >> ew;
  vector<cab> vec;
  rep(i, n){
    cin >> v >> w;
    vec.push_back(cab{v, w});
  }
  vector<vector<int>> memo(n+1, vector<int>(ew+1, 0));
  cout << rec(0,ew,vec,n, memo)<< endl;

  return 0;
}

