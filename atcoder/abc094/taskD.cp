#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int mx = 0;
    int n;
    scanf("%d",&n);
    vector<int> vec;
    forn(i, 0, n) {
        int ai;
        scanf("%d",&ai);
        vec.push_back(ai);
        mx = max(mx, ai);
    }
    int mid = mx / 2;
    int md = INT_MAX;
    int d = -1;
    forn(i, 0, n) {
        if (vec[i] == mx) continue;
        int td = abs(vec[i] - mid);
        if (vec[i] > mid && mx%2 == 1) td--;
        if (td < md) {
            md = td;
            d = vec[i];
        }
    }
    printf("%d %d\n",mx,d);
    return 0;
}
