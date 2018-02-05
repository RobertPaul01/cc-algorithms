#include "bits/stdc++.h"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int main() { _
    int n, m, k;
    cin >> n >> m >> k;
    char seats[n][m];
    int count = 0;
    for (int i = 0; i < n; i++) {
        int cons = 0;
        for (int j = 0; j < m; j++) {
            cin >> seats[i][j];
            if (seats[i][j] == '.') {
                cons++;
                if (cons >= k) count++;
            } else {
                cons = 0;
            }
        }
    }
    if (k != 1) {
        for (int j = 0; j < m; j++) {
            int cons = 0;
            for (int i = 0; i < n; i++) {
                if (seats[i][j] == '.') {
                    cons++;
                    if (cons >= k) count++;
                } else {
                    cons = 0;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}

