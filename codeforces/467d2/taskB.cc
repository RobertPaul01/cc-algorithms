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

bool isPrime(int n) {
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    
    if (n%2 == 0 || n%3 == 0) return false;
    
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return false;
    
    return true;
}

int main() { _
    int p, y; cin >> p >> y;
    
    int prime = -1;
    for (int i = y; i > p; i--) {
        if (isPrime(i)) {
            prime = i;
            break;
        }
    }
    
    if (prime != -1) {
        for (int i = prime + 1; i <= y; i++) {
            bool good = true;
            for (int x = 2; x <= p; x++) {
                if (i % x == 0) {
                    good = false;
                    break;
                }
            }
            if (good) prime = i;
        }
    }
    
    cout << prime << nl;
}
