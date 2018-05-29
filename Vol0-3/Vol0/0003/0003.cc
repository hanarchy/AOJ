#include <cmath>

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
  vector<int> v(3);
  size_t n;
  cin >> n;
  vector<string> output;

  for (int j = 0; j < n; ++j) {
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(),v.end());
    if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
      output.push_back("YES");
    else
      output.push_back("NO");
  }

  for (const auto& s : output)
    cout << s << endl;
  return 0;
}