#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    if (k % 2 == 0 && k / 2 <= n - 2) {
        printf("YES\n");
        for (int i = 0; i < n; i++) printf(".");
        printf("\n");
        
        printf(".");
        for (int i = 0; i < k / 2; i++) printf("#");
        for (int i = (k / 2) + 1; i < n; i++) printf(".");
        printf("\n");
        
        printf(".");
        for (int i = 0; i < k / 2; i++) printf("#");
        for (int i = (k / 2) + 1; i < n; i++) printf(".");
        printf("\n");
        
        for (int i = 0; i < n; i++) printf(".");
    } else if (k % (n - 2) == 0 && k / (n - 2) <= 2) {
        printf("YES\n");
        for (int i = 0; i < n; i++) printf(".");
        printf("\n");
        for (int i = 0; i < k / (n - 2); i++) {
            printf(".");
            for (int i = 1; i < n - 1; i++) printf("#");
            printf(".");
            printf("\n");
        }
        for (int i = k / (n - 2); i < 2; i++) {
            for (int i = 0; i < n; i++) printf(".");
            printf("\n");
        }
        for (int i = 0; i < n; i++) printf(".");
        printf("\n");
    } else {
        printf("NO");
    }
    printf("\n");
    return 0;
}
