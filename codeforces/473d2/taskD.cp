#include "bits/stdc++.h"
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define nl '\n'
#define precision(n) setprecision(n)
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

bool prime[100000];

void sieve() {
    for(int i = 2; i <= 100000; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= 100000; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() { _
    sieve();
    int n; cin >> n;
    vector<int> a(n);
    forn(i, 0, n) {
        cin >> a[i];
    }
    forn(i, 0, n) {
        
    }
    cout << endl;
    return 0;
}
