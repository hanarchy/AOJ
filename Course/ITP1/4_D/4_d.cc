#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n;
  cin >> n;
  int s;
  vector<int> v;
  for (int i = 0; i < n; ++i) {
    cin >> s;
    v.push_back(s);
  }
  int max = *max_element(v.begin(), v.end());
  int min = *min_element(v.begin(), v.end());
  int64_t sum=0;
  for (auto i : v)
    sum += i;

  cout << min << " " << max << " " << sum << endl;

  return 0;
}