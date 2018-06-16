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
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a <= 8 && b <= 8) {
        printf("Yay!\n");
    } else {
        printf(":(\n");
    }
    return 0;
}
