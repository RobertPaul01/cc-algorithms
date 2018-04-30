#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

char t[303][303];

int main() {
    int N;
    scanf("%d", &N);
    forn(i, 0, N)
        forn(j, 0, N)
            scanf(" %c", &t[i][j]);
    
    ll ans = 0;
    forn(B, 0, N) {
        bool good = true;
        forn(i, 0, N)
            for (int j = 0; j < N; j++)
                if (t[i][(j + B) % N] != t[j][(i + B) % N])
                    good = false;
        ans += good;
    }
    
    printf("%llu\n", ans * N);
    return 0;
}
