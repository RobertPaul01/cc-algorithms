#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    vector<int> arr(3);
    int k;
    scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &k);
    sort(all(arr));
    printf("%d\n", arr[0] + arr[1] + arr[2] * (1<<k));
    return 0;
}
