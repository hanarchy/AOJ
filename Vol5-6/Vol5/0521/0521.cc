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
  ll n;
  int a[] = {500,100,50,10,5,1};
  while(cin >> n && n){
    int cnt=0, i=0;
    n = 1000-n;
    while(n){
      cnt += n/a[i];
      n=n%a[i];
      ++i;
    }
    cout << cnt <<endl;
  }

  return 0;
}