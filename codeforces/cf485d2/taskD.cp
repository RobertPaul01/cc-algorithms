#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 100003;
const int K = 103;
vector<int> p[K];
vector<int> g[N];
vector<int> best[N];

void gen() {exit(0);}
int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    
    int n, m, k, s;
    scanf("%d %d %d %d", &n, &m, &k, &s);
    forn(i, 0, n) {
        int x;
        scanf(" %d", &x);
        x--;
        p[x].push_back(i);
    }
    forn(i, 0, m) {
        int u, v;
        scanf(" %d %d", &u, &v);
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    for (int i = 0; i < k; i++) {
        int d[n];
        fill(d, d + n, -1);
        queue<int> q;
        for (int x : p[i]) {
            q.push(x);
            d[x] = 0;
            best[x].push_back(0);
        }
        while (!q.empty()) {
            int top = q.front();
            q.pop();
            for (int x : g[top]) {
                if (d[x] == -1) {
                    d[x] = d[top] + 1;
                    best[x].push_back(d[x]);
                    q.push(x);
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        nth_element(best[i].begin(), best[i].begin() + s, best[i].end());
        int ans = accumulate(best[i].begin(), best[i].begin() + s, 0);
        printf("%d ", ans);
    }
    return 0;
}
