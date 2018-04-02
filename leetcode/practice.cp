#include "bits/stdc++.h"
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define nl '\n'
#define precision(n) setprecision(n)
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

class Solution {
public:
    double search(int a, int b) {
//        cout << a << " " << b << nl;
        if (a == 0 && b == 0) return 0.5;
        if (a <= 0 && b > 0) {
            return 1;
        }
        if (a <= 0 || b <= 0) {
            return 0;
        }
        double found = 0;
        found += search(a - 100, b);
        found += search(a - 75, b - 25);
        found += search(a - 50, b - 50);
        found += search(a - 25, b - 75);
//        cout << found << nl;
        return found * 0.25;
    }
    
    double search2(int a, int b) {
        if (a < 0 || b < 0) return 0;
        if (a == 0 && b == 0) return 1;
        double found = 0;
        found += search(a - 100, b);
        found += search(a - 75, b - 25);
        found += search(a - 50, b - 50);
        found += search(a - 25, b - 75);
        cout << found << nl;
        return found / 4.0;
    }
    
    double soupServings(int N) {
        double prob = 0;
        prob += search(N, N);
//        prob += (search2(N, N) / 2);
        return prob;
    }
};

int main() {
    Solution s;
    cout << s.soupServings(50);
    cout << endl;
}

