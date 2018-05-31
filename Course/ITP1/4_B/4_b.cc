#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
  double r;
  cin >> r;
  double S = M_PI*r*r;
  double L = M_PI*2*r;

  cout << fixed << setprecision(6) << S << " " << L << endl;

  return 0;
}