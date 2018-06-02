#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
  int n, e;
  int64_t p, q;
  bool flag;
  vector<pair<int, int64_t>> v;

  while(cin>> n && n){
    v.clear();
    for (int i = 0; i < n; ++i) {
      cin >> e >> p >> q;
      flag=true;
      for (auto& pa: v){
        if (pa.first==e){
          pa.second += p * q;
          flag = false;
        }
      }
      if(flag)
        v.emplace_back(e, p * q);
    }

    flag = true;
    for (auto pa :v){
      if(pa.second>=1000000){
        cout << pa.first << endl;
        flag = false;
      }
    }
    if (flag) cout << "NA" << endl;
  }
  return 0;
}