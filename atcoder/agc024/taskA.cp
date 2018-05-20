#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int a, b, c;
    unsigned long long k;
    scanf("%d %d %d %llu", &a, &b, &c, &k);
    int arr[2][3];
    arr[0][0] = b + c;
    arr[0][1] = a + c;
    arr[0][2] = a + b;
    arr[1][0] = arr[0][1] + arr[0][2];
    arr[1][1] = arr[0][0] + arr[0][2];
    arr[1][2] = arr[0][0] + arr[0][1];
    if (k % 2 == 1) {
        unsigned long long ab = abs(arr[0][0] - arr[0][1]);
        if (ab > 1e18) {
            printf("Unfair\n");
        } else {
            printf("%d\n", arr[0][0] - arr[0][1]);
        }
    } else {
        unsigned long long ab = abs(arr[1][0] - arr[1][1]);
        if (ab > 1e18) {
            printf("Unfair\n");
        } else {
            printf("%d\n", arr[1][0] - arr[1][1]);
        }
    }
    return 0;
}
