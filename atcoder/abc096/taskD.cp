#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 55556;
bool prime[N];

vector<int> sieve() {
    vector<int> v;
    memset(prime, true, sizeof(prime));
    for(int i = 2; i <= N; i++) {
        if (prime[i]) {
            v.push_back(i);
            for (int j = i; j <= N; j += i)
                prime[j] = false;
        }
    }
    return v;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<int> s = sieve();
    int x = 0;
    for (int i = 0; i < n; i++) {
        while (s[x] % 5 != 1) x++;
        printf("%d ", s[x]);
        x++;
    }
    return 0;
}
