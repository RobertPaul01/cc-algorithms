#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    string s;
    getline(cin, s);
    
    string match = "hello";
    int idx = 0;
    forn(i, 0, s.size())
        if (idx < match.size() && s[i] == match[idx])
            idx++;
    
    printf(idx == match.size() ? "YES\n" : "NO\n");
    return 0;
}
