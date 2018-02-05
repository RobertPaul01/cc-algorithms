#include "bits/stdc++.h"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
    int k;
    cin >> k;
    for (int i = 19; i < INT_MAX; i++) {
        int x = i;
        int count = 0;
        while (x > 0 && count < 10) {
            count += (x % 10);
            x /= 10;
        }
        if (x == 0 && count == 10) {
            k--;
            if (k == 0) return cout << i << endl, 0;
        }
    }
    return 0;
}

