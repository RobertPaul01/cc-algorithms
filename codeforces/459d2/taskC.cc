#include "bits/stdc++.h"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
    string in;
    cin >> in;
    int S = (int)in.size();
    int count = 0;
    int f[S][S], g[S][S];
    for (int i = 0; i < S; i++) {
        int cur = 0;
        bool ok = true;
        for (int j = i; j < S; j++) {
            if (in[j] == ')') {
                cur --;
            } else {
                cur ++;
            }
            if (cur < 0) ok = false;
            f[i][j] = ok;
        }
    }
    for (int i = 0; i < S; i++) {
        int cur = 0;
        bool ok = true;
        for (int j = i; j > -1; j--) {
            if (in[j] == '(') {
                cur --;
            } else {
                cur ++;
            }
            if (cur < 0) ok = false;
            g[j][i] = ok;
        }
    }
    for (int i = 0; i < S; i++) {
        for (int j = i+1; j < S; j+=2) {
            if (f[i][j] && g[i][j]) count++;
        }
    }
    cout << count << endl;
    return 0;
}

