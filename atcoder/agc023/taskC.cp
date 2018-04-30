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
    forn(i, 0, N) {
        forn(j, 0, N) {
            scanf(" %c", &t[i][j]);
        }
    }
    int ans = 0;
    forn(i, 0, N) {
        forn(j, 0, N) {
            printf("%c", t[i][j]);
        }
        printf("\n");
    }
    printf("%d\n", ans);
    return 0;
}

