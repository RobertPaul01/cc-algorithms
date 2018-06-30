#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
void gen() {exit(0);}
template <typename... Args>
void dbg(Args... args) {
    ((cout << args << " "), ...);
    cout << endl;
}

int n;
string s;

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    scanf("%d ", &n);
    getline(cin, s);

    for (int x = 2; x <= n; x++) {
        if (n % x == 0)
            reverse(s.begin(), s.begin() + x);
    }
    
    printf("%s\n", s.c_str());
    return 0;
}
