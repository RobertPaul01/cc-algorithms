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
    map<char, int> l;
    map<char, int> r;
    int m = n;
    for (int i = 1; i < n; i++) r[s[i]]++;
    for (int x = 0; x < n; x++) {
        if (x > 0) {
            l[s[x - 1]]++;
            r[s[x]]--;
        }
        int cur = 0;
        cur += l['W'];
        cur += r['E'];
        m = min(m, cur);
    }
    cout << m << endl;
    return 0;
}

