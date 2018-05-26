#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int a, b;
    cin >> a >> b;
    int m = max(a + b, a - b);
    m = max(m, a * b);
    cout << m << endl;
    return 0;
}
