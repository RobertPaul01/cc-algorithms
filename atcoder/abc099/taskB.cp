#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int h[999];

void gen() {exit(0);}
int main() {
    #ifdef DEBUG
//    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    int a, b;
    scanf("%d %d", &a, &b);
    
    int ch = 1;
    for (int i = 0; i < 999; i++) {
        h[i] = ch;
        ch += (i + 2);
    }
    for (int x = 0; x < 998; x++) {
        if (h[x] >= a) {
            int d = h[x] - a;
            if (h[x + 1] - b == d) {
                printf("%d\n", d);
                exit(0);
            }
        }
    }
    return 0;
}
