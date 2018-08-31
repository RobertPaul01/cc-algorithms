#include <bits/stdc++.h>
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
template <typename... Args> void dbg(Args &&... args) {
  using expander = int[];
  (void)expander{
      0,
      (static_cast<void>(void(cout << std::forward<Args>(args) << " ")), 0)...};
  cout << endl;
}
void gen() {
  exit(0);
}

void input() {
}

void solve() {
}

int main() {
#ifdef DEBUG
  freopen("input", "r", stdin);
  // freopen("output", "w", stdout);
  // gen();
  while (!feof(stdin)) {
    input();
    solve();
    scanf(" ");
  }
#else
  input();
  solve();
#endif
  return 0;
}
