#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  string c;
  int n, s;

  cin >> n;
  vector<string> marks{"S","H","C","D"};
  vector<pair<string, int>> all_card;
  for (const auto &mark : marks) {
    for (int i = 1; i <= 13; ++i)
      all_card.emplace_back(mark,i);
  }

  vector<pair<string, int>> v;
  for (int i = 0; i < n; ++i) {
    cin >> c >> s;
    all_card.erase(remove(all_card.begin(),all_card.end(),make_pair(c, s)), all_card.end());
  }

  for (auto i : all_card)
    cout << i.first << " " << i.second << endl;


  return 0;
}