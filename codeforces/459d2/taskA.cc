#include "bits/stdc++.h"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
    int n;
    cin >> n;
    int a = 1;
    int b = 1;
    for (int i = 1; i < n + 1; i++) {
        if (a == i || b == i) {
            cout << 'O';
        } else {
            cout << 'o';
        }
        if (i >= a) {
            int c = a + b;
            b = a;
            a = c;
        }
    }
    cout << endl;
    return 0;
}

