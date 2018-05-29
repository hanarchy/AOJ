#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
  double a, b, c, d, e, f;
  vector<double> x, y;
  double aembd, x_tmp, y_tmp;
  while (cin >> a >> b >> c >> d >> e >> f){
    aembd = a*e-b*d;
    x_tmp = (e*c-b*f)/aembd;
    y_tmp = (a*f-c*d)/aembd;
    x.push_back(-0.0005 < x_tmp && x_tmp < 0.0+1.0e-10 ? 0.0 : x_tmp);
    y.push_back(-0.0005 < y_tmp && y_tmp < 0.0+1.0e-10 ? 0.0 : y_tmp);
  }

  for (int i = 0; i < x.size(); ++i) {
    cout << fixed << setprecision(3) << x[i] << " " << y[i] << endl;
  }
}