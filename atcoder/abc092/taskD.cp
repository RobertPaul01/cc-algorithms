#include "bits/stdc++.h"
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define nl '\n'
#define precision(n) setprecision(n)
typedef long double ld;
typedef long long ll;

const int size = 100;
char grid[size][size];

int main() { _
    int a, b; cin >> a >> b;
    a--; b--;
    for (int i = 0; i < size / 2; i++) {
        for (int j = 0; j < size; j++) {
            if ((i % 2 == 1 && j % 2 == 1)
                && b) {
                grid[i][j] = '#';
                b--;
            } else {
                grid[i][j] = '.';
            }
        }
    }
    
    for (int i = size / 2; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i % 2 == 1 && j % 2 == 1)
                && a) {
                grid[i][j] = '.';
                a--;
            } else {
                grid[i][j] = '#';
            }
        }
    }
    
    cout << size << " " << size << nl;
    forn(i, 0, size){
        forn(j, 0, size){
            cout << grid[i][j];
        }
        cout << nl;
    }
    return 0;
}
