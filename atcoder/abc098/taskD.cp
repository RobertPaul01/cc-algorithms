#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 2e5 + 7;
int a[N];

int main() {
    int n;
    scanf("%d", &n);
    forn (i, 0, n) {
        scanf(" %d", &a[i]);
    }
    
    ll ans = 0;
    
    int l = 0;
    int r = 1;
    ll cur = a[l];
    
    while (l < n) {
        if (r < n && (cur & a[r]) == 0) {
            cur += a[r];
            r++;
        } else {
            cur -= a[l];
            
            int d = r - l;
            ans += d;
            
            l++;
            if (l == r) {
                r = l + 1;
                cur = a[l];
            }
        }
    }
   
    printf("%lld\n", ans);
    return 0;
}
