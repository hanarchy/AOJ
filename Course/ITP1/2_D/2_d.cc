#include <iostream>

using namespace std;

int main(){
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;

  int xmr=x-r;
  int xpr=x+r;
  int ymr=y-r;
  int ypr=y+r;

  if(ymr>=0 && ypr <= H && xmr>=0 && xpr <= W)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;


  return 0;
}