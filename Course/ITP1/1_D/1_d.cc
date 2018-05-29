#include <iostream>

using namespace std;

int main(){
  int input;
  cin >> input;
  auto hr = static_cast<uint16_t>(input/3600);
  auto min = static_cast<uint16_t>(input/60- hr*60);
  auto sec = static_cast<uint16_t>(input%60);

  cout << hr << ":" << min << ":" << sec << endl;
  return 0;
}