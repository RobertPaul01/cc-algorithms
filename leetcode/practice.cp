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
    bool splitArraySameAverage(vector<int>& A) {
        double avg = 0;
        for (int x : A) avg += x;
        avg /= A.size();
        return false;
    }
};

int main() {
    Solution s;
    vector<int> v = {1,2,3,4,5,6,7,8};
    cout << s.splitArraySameAverage(v);
    cout << endl;
}

