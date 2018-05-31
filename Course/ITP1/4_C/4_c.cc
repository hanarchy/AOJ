#include <iostream>
#include <string>

using namespace std;

int main(){
  int a, b;
  string op;
  int out=0;
  while (true){
    cin >> a >> op >> b;
    if (op=="?")
      break;
    if (op=="+")
      out = a+b;
    if (op=="-")
      out = a-b;
    if (op=="*")
      out=a*b;
    if (op=="/")
      out= a/b;

    cout << out << endl;
  }
  return 0;
}