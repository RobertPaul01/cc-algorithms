#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    char arr[n];
    scanf(" %c", &arr[0]);
    if (n == 1) {
        if (arr[0] == '1') {
            printf("Yes\n");
            exit(0);
        } else {
            printf("No\n");
            exit(0);
        }
    }
    forn(i, 1, n) {
        scanf("%c", &arr[i]);
        if (arr[i] == '1' && arr[i - 1] == '1') {
            printf("No\n");
            exit(0);
        } else if (i > 1 && arr[i] == '0' && arr[i - 1] == '0' && arr[i - 2] == '0') {
            printf("No\n");
            exit(0);
        } else if ((i == 1 || i == n - 1) && arr[i] == '0' && arr[i - 1] == '0') {
            printf("No\n");
            exit(0);
        }
    }
    printf("Yes\n");
    return 0;
}
