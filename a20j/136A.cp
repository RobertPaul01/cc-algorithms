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
    int arr[n + 1];
    forn(i, 1, n + 1) {
        int p;
        scanf("%d", &p);
        arr[p] = i;
    }
    forn(i, 1, n + 1) {
        printf("%d ", arr[i]);
    }
    return 0;
}
