#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    string a, b; cin >> a >> b;
    vector<string> pos;
    for (int i = 1; i <= a.size(); i++) {
        for (int j = 1; j <= a.size(); j++) {
            pos.push_back(a.substr(0,i) + b.substr(0,j));
        }
    }
    sort(all(pos));
    cout << *(pos.begin()) << endl;
    return 0;
}
