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
    vector<pair<int, string>> v;
    forn(i, 0, n) {
        string s;
        getline(cin, s);
        v.push_back({s.size(), s});
    }
    sort(all(v));
    bool pos = true;
    for (int i = 1; i < n; i++) {
        pair<int, string> cur = v[i];
        pair<int, string> prev = v[i - 1];
        auto f = cur.second.find(prev.second);
        if (prev.first == cur.first) {
            if (prev.second != cur.second) {
                pos = false;
                break;
            }
        } else if (f == string::npos) {
            pos = false;
            break;
        }
    }
    if (!pos) {
        printf("NO\n");
    } else {
        printf("YES\n");
        forn(i, 0, n) {
            printf("%s\n", v[i].second.c_str());
        }
    }
    return 0;
}
