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
    scanf("%d", &n);
    map<int, int> pos;
    map<int, map<int, int>> mp;
    forn(i, 0, n) {
        int s;
        scanf(" %d", &s);
        int curSum = 0;
        vector<int> v(s);
        forn(j, 0, s) {
            scanf(" %d", &v[j]);
            curSum += v[j];
        }
        forn(j, 0, s) {
            int cur  = curSum - v[j];
            if (pos.count(cur)) {
                int idx = pos[cur];
                if (idx != i) {
                    int other = mp[idx][cur];
                    printf("YES\n");
                    printf("%d %d\n%d %d\n", i + 1, j + 1, idx + 1, other + 1);
                    exit(0);
                }
            }
            mp[i][cur] = j;
            pos[cur] = i;
        }
    }
    printf("NO\n");
    return 0;
}
