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
    scanf("%d %d %d",&a,&b,&c);
    printf(a <= c && a+b >= c ? "YES" : "NO");
    return 0;
}
