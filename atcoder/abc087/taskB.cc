#include "bits/stdc++.h"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
    int a, b, c, x;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;
    int count = 0;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                if ((500*i) + (100*j) + (50*k) == x) count ++;
            }
        }
    }

    cout << count << endl;
    return 0;
}

