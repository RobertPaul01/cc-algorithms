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

vector<int> a(3);

vector<vector<int>> permutations(vector<int>& v) {
  vector<int> p(v);
  vector<vector<int>> permutations;
  do {
    permutations.push_back(p);
  } while(next_permutation(p.begin(),p.end()));
  return permutations;
}


void input() {
  scanf("%d %d %d", &a[0], &a[1], &a[2]);
}

void solve() {
  int ans = INT_MAX;
  vector<vector<int>> perms = permutations(a);
  for (auto p : perms) {
    int cur = 0;
    for (int i = 1; i < p.size(); i++) {
      cur += abs(p[i] - p[i - 1]);
    }
    ans = min(cur, ans);
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
