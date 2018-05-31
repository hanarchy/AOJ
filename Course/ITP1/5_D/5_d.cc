#include <iostream>

using namespace std;

int main(){
  int x, n;
  cin >> n;

  for (int i = 1; i <= n; ++i) {
    x = i;
    if(x % 3 ==0){
      cout << " " << i;
      continue;
    } else if(x % 10 ==3){
      cout << " " << i;
      continue;
    } else{
      while(x/=10){
        if(x%10==3){
          cout << " " << i;
          break;
        }
      }
    }


  }
  cout << endl;

  return 0;
}