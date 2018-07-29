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
const int N = 100005;
int a[N];

void input() {
  scanf("%d", &n);
  forn(i, 0, n) {
    scanf(" %d", &a[i]);
  }
}

void solve() {
  ll sum = 0;
  forn(i, 0, n) {
    sum += a[i];
  }
  
  ll ans = 0;
  forn(i, 0, n) {
    
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
