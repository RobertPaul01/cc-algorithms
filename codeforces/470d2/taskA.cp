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

int main() { _
    int C, R; cin >> C >> R;
    char state[C][R];
    forn(i, C)
        forn(j, R) cin >> state[i][j];
    
    forn(i, C)
        forn(j, R) {
            if (state[i][j] == 'S') {
                pii up = {i-1, j};
                pii down = {i+1, j};
                pii left = {i, j-1};
                pii right = {i, j+1};
                pii dirs[] = {up, down, left, right};
                for (pii p : dirs) {
                    if (p.first > -1 && p.first < C && p.second > -1 && p.second < R) {
                        if (state[p.first][p.second] == 'W') {
                            cout << "No" << endl;
                            exit(0);
                        } else if (state[p.first][p.second] != 'S') {
                            state[p.first][p.second] = 'D';
                        }
                    }
                }
            }
        }
    
    cout << "Yes" << nl;
    forn(i, C) {
        forn(j, R) {
            cout << state[i][j];
        }
        cout << nl;
    }
}
