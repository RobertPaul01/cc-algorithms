#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

bool prime[555556];

vector<int> sieve(int n) {
    vector<int> v;
    memset(prime, true, sizeof(prime));
    for(int i = 2; i <= n; i++) {
        if (prime[i]) {
            v.push_back(i);
            for (int j = i; j <= n; j += i)
                prime[j] = false;
        }
    }
    return v;
}

int main() {
    int N;
    scanf("%d", &N);
    vector<int> s = sieve(555);
    set<int> bad[5];
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            bad[0].insert(s[j] - s[i]);
        }
    }
    
    for (int x = 0; x < 5; x++) {
        for (int q : bad[x]) {
            for (int i = 0; i < s.size(); i++) {
                if (q > s[i])
                    bad[x + 1].insert(q - s[i]);
            }
        }
    }
   
    for (int x : bad[4])
        printf("%d ", x);
//    int x = 0;
//    for (int i = 0; i < N; i++) {
//        while (bad[1].count(s[x])) x++;
//        printf("%d ", s[x]);
//    }

    return 0;
}
