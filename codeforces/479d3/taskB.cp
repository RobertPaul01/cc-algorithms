#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    int n;
    scanf("%d ", &n);
    string s;
    getline(cin, s);
    map<string, int> mp;
    string p;
    int mx = -1;
    forn(i, 1, n) {
        string a = "";
        a += s[i - 1];
        a += s[i];
        mp[a]++;
        if (mp[a] > mx) {
            p = a;
            mx = mp[a];
        }
    }
    printf("%s\n", p.c_str());
    return 0;
}
