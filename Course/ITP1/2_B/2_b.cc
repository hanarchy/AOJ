#include <iostream>
#include <string>

using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  string s{"Yes"};
  if(a>=b || a>=c || b>=c)
    s = "No";
  cout << s << endl;
  return 0;
}