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
    scanf("%d",&n);
    vector<pii> segs;
    forn(i,0,n) {
        forn(j,i,n) {
            segs.push_back({i,j});
        }
    }
    int m = n / 2;
    int count = 0;
    for (pii p : segs) {
        if (m >= p.first && m <= p.second) count++;
    }
    printf("%d\n",count);
    return 0;
}
