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
    int o = 0;
    forn(i, 0, s.size()) {
        if (s[i] == 'o') o++;
    }
    if (o == 0 || (s.size() - o) % o == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
