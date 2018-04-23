#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    string ans = "";
    forn(i, 0, a.size()) {
        if (a[i] != b[i]) ans += "1";
        else ans += "0";
    }
    printf("%s\n", ans.c_str());
    return 0;
}
