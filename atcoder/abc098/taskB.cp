#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<int> l;
    set<int> r;
    int m = 0;
    for (int x = 0; x < n - 1; x++) {
        l.insert(s[x]);
        for (int i = x + 1; i < n; i++) {
            r.insert(s[i]);
        }
        int cur = 0;
        for (int a : l) {
            if (r.count(a)) cur++;
            m = max(m, cur);
        }
        r.clear();
    }
    cout << m << endl;
    return 0;
}
