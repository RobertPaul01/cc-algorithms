#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
template <typename... Args>
void dbg(Args... args) {
    ((cout << args << " "), ...);
    cout << endl;
}
void gen() {exit(0);}

int n;
map<int, map<char, int>> a;

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    scanf("%d ", &n);
    int ans = 0;
    forn(i, 0, n) {
        string s;
        getline(cin, s);
        int p = (int)s.size();
        a[p][s[p - 1]]++;
    }
    forn(i, 0, n) {
        string s;
        getline(cin, s);
        int p = (int)s.size();
        if (a[p][s[p - 1]] > 0) {
            a[p][s[p - 1]]--;
        }
    }
    for (auto p : a) {
        for (auto q : p.second) {
            ans += q.second;
        }
    }
    printf("%d\n", ans);
    return 0;
}
