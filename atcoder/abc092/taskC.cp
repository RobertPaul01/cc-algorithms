#include "bits/stdc++.h"
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define nl '\n'
#define precision(n) setprecision(n)
typedef long double ld;
typedef long long ll;

int main() { _
    int n; cin >> n;
    
    vector<int> nums;
    vector<int> pre;
    int x = 0;
    int sum = 0;
    forn(i, 0, n) {
        int ai; cin >> ai;
        nums.push_back(ai);
        pre.push_back(abs(ai - x));
        sum += abs(pre[i]);
        x = ai;
    }
    pre.push_back(abs(x));
    sum += abs(x);

    x = 0;
    forn(i, 0, n) {
        int cur = nums[i];
        int next = i == n - 1 ? 0 : nums[i + 1];
        int cv = pre[i];
        int nv = pre[i + 1];
        int d;
        if ((cur >= x && cur <= next) || (cur <= x && cur >= next)) {
            d = nv + cv;
        } else {
            d = abs(cv - nv);
        }
        cout << sum - cv - nv + d << nl;
        x = nums[i];
    }
    
    return 0;
}
