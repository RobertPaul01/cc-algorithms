#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
template <typename... Args>
void dbg(Args... args) {
    ((cout << args << " "), ...);
    cout << endl;
}
void gen() {
    exit(0);
}

const int N = (int)1e5 + 7;
int n;
int a[N];

void input() {
#ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
#endif
    scanf("%d", &n);
    forn(i, 0, n) {
        scanf(" %d", &a[i]);
    }
}

void solve() {
    map<int, int> change;
    string ans = "YES";
    forn(i, 0, n) {
        if (a[i] == 100) {
            if (change[50] >= 1 && change[25] >= 1) {
                change[50] -= 1;
                change[25] -= 1;
            } else if (change[25] >= 3) {
                change[25] -= 3;
            } else {
                ans = "NO";
                break;
            }
        } else if (a[i] == 50) {
            if (change[25] >= 1) {
                change[25] -= 1;
            } else {
                ans = "NO";
                break;
            }
        }
      change[a[i]]++;
    }
    printf("%s\n", ans.c_str());
}

int main() {
    input();
    solve();
    return 0;
}
