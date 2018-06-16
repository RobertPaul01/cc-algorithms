#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

bool m[307][307];

void gen() {exit(0);}
int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    pii mn = {300, 300};
    pii mx = {-1, -1};
    for (int i = 0; i < 4; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        x += 100;
        y += 100;
        mn = min(mn, {x, y});
        mx = max(mx, {x, y});
    }
    for (int i = mn.first; i < mx.first; i++) {
        for (int j = mn.second; j < mx.second; j++) {
            m[i][j] = true;
        }
    }
    vector<pii> a;
    for (int i = 0; i < 4; i++) {
        pii c;
        scanf(" %d %d", &c.first, &c.second);
        c.first += 100;
        c.second += 100;
        a.push_back(c);
    }
    sort(all(a));
    swap(a[a.size() - 1], a[a.size() - 2]);
    for (size_t i = 0; i < a.size(); i++) {
        pii f = a[i];
        pii n = a[(i+1) % a.size()];
        pii d = {0, 0};

        if (i == 0) {
            f.second--;
            n.second--;
        } else if (i == 1) {
            f.first--;
            n.first--;
        } else if (i == 3) {
            f.first--;
            f.second--;
            n.first--;
            n.second--;
        }
        if (n.first < f.first) {
            d.first = -1;
        } else {
            d.first = 1;
        }
        
        if (n.second < f.second) {
            d.second = -1;
        } else {
            d.second = 1;
        }
        for (int x = f.first, y = f.second; ; x+=d.first, y+=d.second) {
            if (x == n.first && y == n.second) break;
            for (int r = -1; r <= 1; r++) {
                for (int s = -1; s <= 1; s++) {
                    if (m[x + r][y + s]) {
                        printf("YES\n");
                        exit(0);
                    }
                }
            }
        }
    }
    printf("NO\n");
    return 0;
}
