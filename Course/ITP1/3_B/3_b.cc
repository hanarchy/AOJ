#include <iostream>
#include <vector>

using namespace std;

int main(){
  int a;
  for (int j = 1; ; ++j) {
    cin >> a;
    if (a==0) break;
    cout << "Case " << j << ": " << a << endl;
  }

  return 0;
}