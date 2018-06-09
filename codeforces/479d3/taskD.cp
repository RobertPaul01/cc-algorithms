#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef unsigned long long ll;

bool found = false;
vector<ll> v;
map<ll, int> s;
string ans;

void dfs(ll x, map<ll, int> &cur, int count, int n) {
    if (s[x] > cur[x]) {
        cur[x]++;
        if (count == n - 1) {
            ans = to_string(x);
            found = true;
            return;
        }
        if (x % 3 == 0) {
            dfs(x / 3, cur, count + 1, n);
        }
        dfs(x * 2, cur, count + 1, n);
        ans = to_string(x) + " " + ans;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    forn(i, 0, n) {
        ll x;
        scanf(" %llu", &x);
        v.push_back(x);
        s[x]++;
    }
    int x = 0;
    while (!found) {
        map<ll, int> cur;
        ans = "";
        dfs(v[x], cur, 0, n);
        x++;
    }
    printf("%s\n", ans.c_str());
    return 0;
}
