#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct pos {
 public:
  int x = 10;
  int y = 10;
};

int main() {
  int n, m, x, y, l;
  string d;
  vector<pair<int, int>> v;
  while (cin >> n && n) {
    pos c_pos = pos();
    v.clear();
    for (int i = 0; i < n; ++i) {
      cin >> x >> y;
      v.emplace_back(x, y);
    }
    cin >> m;
    for (int j = 0; j < m; ++j) {
      cin >> d >> l;
      for (int i = 0; i < l; ++i) {
        if (d == "N") ++c_pos.y;
        if (d == "E") ++c_pos.x;
        if (d == "S") --c_pos.y;
        if (d == "W") --c_pos.x;
        for (auto &pa: v) if (pa.first == c_pos.x && pa.second == c_pos.y) pa.first = -1;
      }
    }
    bool isNotAllGet = false;
    for (auto pa:v)
      if (pa.first != -1) isNotAllGet = true;

    if (isNotAllGet)
      cout << "No" << endl;
    else
      cout << "Yes" << endl;
  }

  return 0;
}