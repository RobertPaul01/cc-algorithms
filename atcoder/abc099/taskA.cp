#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

void gen() {exit(0);}
int main() {
    #ifdef DEBUG
//    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    
    int n;
    scanf("%d", &n);
    int x = n / 1000;
    cout << "AB" << (char)('C' + x) << endl;
    return 0;
}
