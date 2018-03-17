#include "bits/stdc++.h"
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, n) for (int i = 0; i < n; i++)
#define fin(ds) for (auto &v : ds) cin >> v;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define nl '\n'

typedef long long ll;

const int eng = 'z' + 1;
char dsu[eng][2];

char find(char c) {
    if (dsu[c][0] != c) {
        dsu[c][0] = find(dsu[c][0]);
    }
    return dsu[c][0];
}

int main() { _
    int n; cin >> n;
    string a, b; cin >> a >> b;
    forn(i, eng) {
        dsu[i][0] = i;
        dsu[i][1] = 0;
    }
    
    int count = 0;
    forn(i, n) {
        char aRoot = find(a[i]);
        char bRoot = find(b[i]);
        if (aRoot != bRoot) {
            count ++;
            if (dsu[aRoot][1] < dsu[bRoot][1]) {
                dsu[aRoot][0] = bRoot;
            } else if (dsu[aRoot][1] > dsu[bRoot][1]) {
                dsu[bRoot][0] = aRoot;
            } else {
                dsu[aRoot][0] = bRoot;
                dsu[aRoot][1]++;
            }
        }
    }
    
    cout << count << endl;
    forn(i, eng) {
        if (dsu[i][0] != i) {
            cout << (char)i << " " << dsu[i][0] << nl;
        }
    }
}
