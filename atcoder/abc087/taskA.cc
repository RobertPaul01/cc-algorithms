#include "bits/stdc++.h"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
    int x, a, b;
    cin >> x;
    cin >> a;
    cin >> b;
    x -= a;
    cout << (x % b) << endl;
    return 0;
}

