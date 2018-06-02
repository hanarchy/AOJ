#include <iostream>
#include <vector>

using namespace std;

int main(){
  const int tou_num=4, kai_num=3, room_num=10;
  int n;
  vector<vector<vector<int>>> v(tou_num, vector<vector<int>>(kai_num, vector<int>(room_num, 0)));

  cin >> n;

  int t,k,r,m;
  for (int i = 0; i < n; ++i) {
    cin >> t >> k >> r >> m;
    v[t-1][k-1][r-1] = v[t-1][k-1][r-1] + m;
  }


  for (int tou = 0; tou < tou_num; ++tou) {
    for (int kai = 0; kai < kai_num; ++kai) {
      for (int room = 0; room < room_num; ++room) {
        cout << " "<<v[tou][kai][room];
        if (room==room_num-1)
          cout << endl;
      }
    }

    if (tou != tou_num -1){
      for (int i = 0; i < 20; ++i)
        cout << "#";
      cout << endl;

    }
  }

  return 0;
}