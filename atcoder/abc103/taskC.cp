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

const int N = 3010;
int n;
int a[N];

void input() {
  scanf("%d", &n);
  forn(i, 0, n) {
    scanf(" %d", &a[i]);
  }
}

ll GCD(ll u, ll v) {
  while (v != 0) {
    ll r = u % v;
    u = v;
    v = r;
  }
  return u;
}

ll LCM(ll a, ll b) {
  return (a * b) / GCD(max(a, b), min(a, b));
}

void solve() {
  ll ans = 0;
  forn(j, 0, n) {
    ans += a[j] - 1;
  }
  printf("%lld\n", ans);
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
