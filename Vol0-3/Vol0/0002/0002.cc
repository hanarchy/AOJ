#include <cmath>

#include <iostream>
#include <vector>
using namespace std;

int main(){
  int a, b;
  vector<int> output;
  while(cin >> a >> b) {
    if(a + b == 0)
      output.push_back(1);
    else
      output.push_back(static_cast<int>(log10(static_cast<double>(a + b))) + 1);
  }
  for (const auto& i: output)
    cout << i << endl;

  return 0;
}