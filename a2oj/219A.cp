#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int k;
    scanf("%d ", &k);
    string s;
    getline(cin, s);
    
    map<char, int> m;
    forn(i, 0, s.size())
        m[s[i]]++;
    
    string ans = "";
    for (pair<char, int> p : m) {
        if (p.second % k != 0) {
            printf("-1");
            exit(0);
        }
        for (int x = 0; x < (p.second / k); x++)
            ans += p.first;
    }
    
    forn(i, 0, k)
        printf("%s", ans.c_str());
    return 0;
}
