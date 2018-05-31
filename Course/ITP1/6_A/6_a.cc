#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int> v;
  int n, tmp;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> tmp;
    v.push_back(tmp);
  }
  for_each(v.rbegin(), v.rend()-1, [](auto i){
    cout << i << " ";
  });
  cout << v[0] << endl;
  return 0;
}