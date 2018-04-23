#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    string a, b, pile;
    getline(cin, a);
    getline(cin, b);
    getline(cin, pile);
    map<char, int> m;
    forn(i, 0, pile.size()) {
        m[pile[i]]++;
    }
    forn(i, 0, a.size()) {
        m[a[i]]--;
    }
    forn(i, 0, b.size()) {
        m[b[i]]--;
    }
    bool ans = true;
    for (pair<char, int> p : m) {
        if (p.second != 0) ans = false;
    }
    printf(ans ? "YES\n" : "NO\n");
    return 0;
}
