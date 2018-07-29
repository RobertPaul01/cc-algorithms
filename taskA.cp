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
const int N = 1000;
int a[N];

void input() {
  scanf("%d", &n);
  forn(i, 0, n) {
    int x;
    scanf(" %d", &x);
    a[i] = x;
  }
}

void solve() {
  forn(i, 0, n) {
    if (a[i] % 2 == 0) a[i]--;
    printf("%d ", a[i]);
  }
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
