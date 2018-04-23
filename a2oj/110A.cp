#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    ll n;
    scanf("%lld", &n);
    int length = 0;
    while (n) {
        int end = n % 10;
        if (end != 4 && end != 7) {
        } else {
            length++;
        }
        n /= 10;
    }
    printf((length == 7 || length == 4) ? "YES\n" : "NO\n");
    return 0;
}
