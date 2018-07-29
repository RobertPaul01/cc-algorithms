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
ll k;
ll g[20][20];

void input() {
  scanf("%d %d %lld", &n, &m, &k);
  forn(i, 0, n)
    forn(j, 0, m)
      scanf(" %lld", &g[i][j]);
}

ll memo[20][20];

void solve() {
  int ans = 0;
  memo[0][0] = 1;
  forn(i, 0, n) {
    forn(j, 0, m) {
      if (i > 0) {
        memo[i][j] += memo[i - 1][j];
      }
      if (j > 0) {
        memo[i][j] += memo[i][j - 1];
      }
    }
  }
  forn(i, 0, n) {
    forn(j, 0, m) {
      printf("%lld ", memo[i][j]);
    }
    printf("\n");
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
