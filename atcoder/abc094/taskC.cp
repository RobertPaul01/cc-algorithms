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
    vector<int> order;
    vector<int> vec;
    forn(i,0,n) {
        int xi;
        scanf("%d",&xi);
        vec.push_back(xi);
        order.push_back(xi);
    }
    sort(all(vec));
    int m = (n / 2) - 1;
    forn(i,0,n) {
        int xi = order[i];
        int mi = vec[m];
        if (xi <= mi) {
            mi = vec[m + 1];
        } else {
            mi = vec[m];
        }
        printf("%d\n", mi);
    }
    return 0;
}
