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

int n, k;
const int N = 2000;
int a[N];

void input() {
  scanf("%d %d", &n, &k);
  forn(i, 0, n) {
    scanf(" %d", &a[i]);
  }
}

void solve() {
  priority_queue<pii> q;
  forn(i, 0, n) {
    q.push({a[i], i});
  }
  vector<int> v;
  int ans = 0;
  for (int i = 0; i < k; i++) {
    pii top = q.top();
    q.pop();
    ans += top.first;
    v.push_back(top.second);
  }
  printf("%d\n", ans);
  sort(all(v));
  int prev = -1;
  for (int x = 0; x < v.size(); x++) {
    if (x == v.size() - 1) {
      printf("%d ", n - prev - 1);
    } else {
      printf("%d ", v[x] - prev);
      prev = v[x];
    }
  }
  printf("\n");
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
