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
    vector<int> vec(n);
    int sum = 0;
    forn(i, 0, n) {
        scanf("%d", &vec[i]);
        sum += vec[i];
    }
    sort(all(vec));
    int osum = 0;
    int i = n - 1;
    for (; i > -1; i--) {
        osum += vec[i];
        sum -= vec[i];
        if (osum > sum) break;
    }
    printf("%d\n", n - i);
    return 0;
}
