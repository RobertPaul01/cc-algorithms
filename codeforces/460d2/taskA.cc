#include "bits/stdc++.h"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
    int n, m;
    cin >> n >> m;
    long double minPrice = DBL_MAX;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        minPrice = min(minPrice, (long double)a/(long double)b);
    }
    cout << setprecision (9) << (minPrice * (long double)m) << endl;
    return 0;
}

