#include <cmath>
#include <cstdio>

#include <stack>
#include <queue>
#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <numeric>
#include <string>
#include <array>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) x.begin(), x.end()

using namespace std;
typedef long long int ll;

int main() {
  ll r, n, p, c;
  while ((cin >> n && n) and (cin >> r && r)) {
    vector<ll> deck(n), s;
    iota(all(deck), 1);
    sort(deck.rbegin(), deck.rend());
    rep(i, r){
      cin >> p >> c;
      s.clear();
      for (int j = p-1; j < p+c-1; ++j) {
        s.push_back(deck.at(j));

      }
      deck.erase(deck.begin()+p-1,deck.begin() +p+c-1);
      copy(deck.begin(), deck.end(), back_inserter(s));
      deck = s;
    }
    cout << deck.at(0) << endl;
  }

  return 0;
}