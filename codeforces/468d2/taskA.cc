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
    int a[2]; cin >> a[0] >> a[1];
    sort(a, a + 2);
    int cost = 0;
    int move = 1;
    while (a[0] != a[1]) {
        a[0]++;
        cost += move;
        if (a[0] == a[1]) break;
        a[1]--;
        cost += move;
        move ++;
    }
    cout << cost << endl;
}
