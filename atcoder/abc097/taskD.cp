#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 100000;
vector<int> s[N];
int dsu[N];
int k[N];
int p[N];

int find(int x) {
    while (x != k[x]) x = k[x];
    return x;
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (s[a] < s[b]) swap(a,b);
    dsu[a] += dsu[b];
    k[b] = a;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    forn(i, 0, n) {
        int x;
        scanf("%d ", &x);
        x--;
        p[i] = x;
        k[i] = i;
        dsu[i] = i;
    }
    forn(i, 0, m) {
        int x, y;
        scanf("%d %d", &x, &y);
        x--; y--;
        s[x].push_back(y);
        s[y].push_back(x);
    }
    forn (i, 0, n) {
        for (int x : s[i]) {
            unite(i, x);
        }
    }
    int ans = 0;
    forn(i, 0, n) {
        if (find(p[i]) == find(i)) {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
