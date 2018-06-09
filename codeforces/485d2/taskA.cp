#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const string v[] = {"purple", "green", "blue", "orange", "red", "yellow"};
const string m[] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
    #endif
    int n;
    scanf("%d", &n);
    set<string> ss;
    forn(i, 0, n) {
        string s;
        cin >> s;
        ss.insert(s);
    }
    printf("%d\n", 6 - (int)ss.size());
    for (int i = 0; i < 6; i++) {
        if (!ss.count(v[i])) {
            printf("%s\n", m[i].c_str());
        }
    }
    return 0;
}
