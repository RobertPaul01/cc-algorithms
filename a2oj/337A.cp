#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> vec(m);
    forn(i, 0, m)
        scanf("%d", &vec[i]);
    sort(all(vec));
    int low = 0;
    int high = n - 1;
    int dif = INT_MAX;
    for (; high < m; low++, high++)
        dif = min(dif, vec[high] - vec[low]);
    printf("%d\n", dif);
    return 0;
}
