#ifdef DEBUG
#include "bits/stdc++.h"
#include "parser.cp"
#endif
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

class Solution {
public:
  vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = (int)nums.size();
    for (int i = 0; i < (1 << n); i++) {
      vector<int> v;
      for (int j = 0; j < n; j++) {
        if (i & (1 << j)) v.push_back(nums[j]);
      }
      ans.push_back(v);
    }
    return ans;
  }
};

#ifdef DEBUG
int main() {
  Parser p;
  freopen("input", "r", stdin);
  vector<int> v = p.parseVI();
  Solution s;
  auto ans = s.subsets(v);
  for (auto v : ans) {
    for (int x : v) {
      cout << x << " ";
    }
    cout << endl;
  }
}
#endif
