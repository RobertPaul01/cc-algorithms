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
void gen() {exit(0);}

int n;
string a, b;

void input() {
  scanf("%d ", &n);
  getline(cin, a);
  getline(cin, b);
}

void solve() {
  int h = n / 2;
  set<char> s[h];
  for (int i = 0; i < h; i++) {
    s[i].insert(b[i]);
    s[i].insert(b[n - i - 1]);
  }
  int ans = 0;
  if (n % 2 == 1) {
    ans += !(a[h] == b[h]);
  }
  for (int i = 0; i < h; i++) {
    if (a[i] == a[n - i - 1]) {
      if (s[i].size() == 2) {
        if (s[i].count(a[i])) {
          ans++;
        } else {
          ans += 2;
        }
      }
    } else {
      if (s[i].size() == 1) {
        ans++;
      } else {
        ans += !(s[i].count(a[i]));
        ans += !(s[i].count(a[n - i - 1]));
      }
    }
  }
  printf("%d\n", ans);
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
