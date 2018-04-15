#include "bits/stdc++.h"
using namespace std;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

class Solution {
public:
    map<int, int> m;
    int run(int pos, int spe, int t) {
        cout << pos << endl;
        if (m.count(pos)) return m[pos];
        if (pos == t) {
            return 0;
        } else if (pos > t + 10) {
            return 50000;
        } else if (pos < -10) {
            return 50000;
        }
        int a = INT_MAX;
        if (pos < t || spe > 0)
            a = run(pos + spe, spe * 2, t);
        int r = INT_MAX;
        if (pos > t || spe < 0)
            r = run(pos, spe * -1, t);
        m[pos] = min(a, r) + 1;
        return m[pos];
    }
    int racecar(int target) {
        return run(0, 1, target);
    }
};

int main() {
    Solution s;
    cout << s.racecar(6);
}

