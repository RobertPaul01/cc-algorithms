#include "bits/stdc++.h"
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define nl '\n'
typedef long double ld;
typedef long long ll;

int main() { _
    string s; cin >> s;
    map<char, int> m;
    int one = 0;
    int two = 0;
    for (char c : s) {
        m[c]++;
        one += m[c] == 1;
        one -= m[c] == 2;
        
        two += m[c] == 2;
    }
    if (one + two > 4) {
        cout << "No";
    } else {
        if (one == 2 && two >= 1) {
            cout << "Yes";
        } else if (one == 4) {
            cout << "Yes";
        } else if (one == 3 && two == 1) {
            cout << "Yes";
        } else if (two >= 2) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    }
    cout << nl;
}
