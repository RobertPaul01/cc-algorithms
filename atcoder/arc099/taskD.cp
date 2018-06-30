#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
void gen() {
    int t = 800000;
    long double a[t];
    bool b[t];
    for (int i = 1; i < t; i++) {
        int c = i;
        int x = 0;
        while (c) {
            x += c % 10;
            c /= 10;
        }
        a[i] = (long double)i / x;
        b[i] = true;
    }
    for (int i = 1; i < t; i++) {
        for(int j = i + 1; j < t; j++) {
            if (a[i] > a[j]) b[i] = false;
        }
    }
    for (int i = 1; i < t; i++) {
        if (b[i]) {
            printf("%d\n", i);
        }
    }
    exit(0);
}

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
    freopen("slow-output", "w", stdout);
    gen();
    #endif
    ll k;
    scanf("%lld", &k);
    
    for (int i = 1; i < 10 && k > 0; i++) {
        printf("%d\n", i);
        k--;
    }

    ll d = 10;
    int t = 9;
    for (ll i = 19, q = 1; k > 0; i += d) {
        printf("%lld\n", i);
        if (q == t) {
            q = 0;
            t += 9;
            d *= 10;
        } else {
            q++;
        }
        k--;
    }
    return 0;
}
