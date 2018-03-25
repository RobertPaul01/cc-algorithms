#include "bits/stdc++.h"
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define nl '\n'
#define precision(n) setprecision(n)
typedef long double ld;
typedef long long ll;

int main() { _
    int hh, mm; cin >> hh >> mm;
    double h, d, c, n; cin >> h >> d >> c >> n;
    
    double cost = ceil(h / n) * c;
    if (hh < 20) {
        int mins = 0;
        mins += ((20 - hh) - 1) * 60;
        mins += 60 - mm;
        h += mins * d;
    }
    double new_cost = ceil(h / n) * (c * 0.80);
    cost = min(new_cost, cost);

    cout << precision(9) << cost << nl;
}
