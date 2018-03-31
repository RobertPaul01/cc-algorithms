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

int MAX_LEN = 26;

int main() { _
    string s; cin >> s;
    int n = (int)s.length();
    char ch = 'a';
    set<char> seen;
    
    forn(i, 0, n) {
        seen.insert(s[i]);
        while(seen.count(ch)) {
            ch++;
        }
    }
    
    if (n < MAX_LEN) {
        cout << s << ch <<nl;
    } else {
        seen.erase(s[n - 1]);
        for (int i = n - 2; i > -1; i--) {
            char cur = s[i];
            while (seen.count(cur)) {
                cur++;
            }
            if (cur <= 'z') {
                s[i] = cur;
                cout << s.substr(0, i + 1) << nl;
                return 0;
            } else {
                seen.erase(s[i]);
            }
        }
        cout << -1 << nl;
    }
    return 0;
}
