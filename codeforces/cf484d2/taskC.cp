#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 100000;
int k[N];
int s[N];

int find(int x) {
    while (x != k[x]) x = k[x];
    return x;
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (s[a] < s[b]) swap(a,b);
    s[a] += s[b];
    k[b] = a;
}

vector<int> g[N];

int main() {
    forn(i, 0, N) k[i] = i;
    forn(i, 0, N) s[i] = i;
    int n;
    scanf("%d ", &n);
    forn(i, 0, n - 1) {
        int x, y;
        scanf("%d %d", &x, &y);
        x--; y--;
        unite(x, y);
        g[x].push_back(y);
        g[y].push_back(x);
    }
    map<int, int> sizes;
    map<int, int> edges;
    forn(i, 0, n) {
        int x = find(i);
        sizes[x]++;
        int dec = 0;
        if (g[i].size() % 2 == 0) {
            for (int y : g[i]) {
                if (g[y].size() % 2 == 0) {
                    dec++;
                }
            }
        }
        edges[x] += dec;
    }
    int ans = 0;
    for(pii p : sizes) {
        int x = p.first;
        int y = p.second;
        if (y % 2 == 1) {
            printf("-1\n");
            exit(0);
        } else {
            ans += (edges[x] / 2);
        }
    }
    printf("%d\n", ans);
    return 0;
}
