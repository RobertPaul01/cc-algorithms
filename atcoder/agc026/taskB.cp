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

int t;
ll nums[304][4];

void input() {
  scanf("%d", &t);
  forn(i, 0, t) {
    scanf(" %lld %lld %lld %lld", &nums[i][0], &nums[i][1], &nums[i][2], &nums[i][3]);
  }
}

void solve() {
  forn(i, 0, t) {
    ll a = nums[i][0];
    ll b = nums[i][1];
    ll c = nums[i][2];
    ll d = nums[i][3];
    if (a > b && d - b >= b - c) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }
}

int main() {
#ifdef DEBUG
  freopen("input", "r", stdin);
  freopen("output", "w", stdout);
  //  gen();
#endif
  input();
  solve();
  return 0;
}
