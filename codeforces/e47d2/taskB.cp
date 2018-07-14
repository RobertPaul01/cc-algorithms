#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
template <typename... Args>
void dbg(Args&&... args) {
  using expander = int[];
  (void)expander {0,(static_cast<void>(void(cout << std::forward<Args>(args) << " ")), 0)...};
  cout << endl;
}
void gen() {
  vector<int> v;
  forn(i, 0, 100000) {
    v.push_back(rand() % 3);
  }
  sort(all(v), greater<int>());
  for (int x : v) {
    cout << x;
  }
  exit(0);
}

string s;

void input() {
  getline(cin, s);
}

void solve() {
  int idx[3];
  idx[0] = idx[1] = idx[2] = -1;
  for (int i = 0; i < s.size(); i++) {
    int cur = s[i] - '0';
    if (i > 0 && s[i] + 1 == s[i - 1]) {
      int prev = s[i - 1] - '0';
      swap(s[i], s[idx[prev]]);
      idx[prev]++;
    } else {
        if (idx[cur] == -1) {
          idx[cur] = i;
        }

        for (int i = 0; i < 3; i++) {
          if (i != cur) idx[i] = -1;
        }
    }
  }
  printf("%s\n", s.c_str());
}

int main() {
#ifdef DEBUG
  freopen("input", "r", stdin);
//  freopen("output", "w", stdout);
//  gen();
#endif
  input();
  solve();
  return 0;
}
