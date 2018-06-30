#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
void gen() {exit(0);}
template <typename... Args>
void dbg(Args... args) {
    ((cout << args << " "), ...);
    cout << endl;
}

int n, m;
const int N = 2e5 + 7;
int a[N];
int c[N];
stack<int> stacks[N];

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    scanf("%d %d", &n, &m);
    
    int target = n / m;
    forn(i, 0, n) {
        scanf(" %d", &a[i]);
        c[a[i] % m]++;
    }
    
    ll ans = 0;
    int dif = 1;
    forn(i, 0, m) {
        while (c[i] > target) {
            int cur = (i + dif) % m;
            while (c[i] > target && c[cur] < target) {
                c[i]--;
                c[cur]++;
                ans += dif;
                stacks[i].push(dif);
            }
            if (c[i] > target && c[cur] >= target) {
                dif++;
            }
        }
        if (dif > 1) {
            dif--;
        }
    }
    
    printf("%lld\n", ans);
    forn(i, 0, n) {
        int d = 0;
        int cur = a[i] % m;
        if (stacks[cur].empty() == false) {
            d = stacks[cur].top();
            stacks[cur].pop();
        }
        printf("%d ", a[i] + d);
    }
    printf("\n");

    return 0;
}
