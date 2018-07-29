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

int n, m;
map<int, int> v;

void input() {
  scanf("%d %d", &n, &m);
  forn(i, 0, n) v[i] = n + 1;
  forn(i, 0, m) {
    int a, b;
    scanf(" %d %d", &a, &b);
    int x = min(a, b);
    int y = max(a, b);
    v[x] = min(v[x], y);
  }
}

void solve() {
  int ans = 0;
  int current = n + 1;
  forn(i, 1, n + 1) {
    if (i >= current) {
      ans++;
      current = n + 1;
    }
    current = min(current, v[i]);
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
