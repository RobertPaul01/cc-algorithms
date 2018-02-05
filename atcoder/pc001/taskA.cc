#include "bits/stdc++.h"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
    long long x, y;
    cin >> x >> y;
    if (x%y==0) return cout << -1 << endl, 0;
    cout << (x*y) - x << endl;
    return 0;
}

