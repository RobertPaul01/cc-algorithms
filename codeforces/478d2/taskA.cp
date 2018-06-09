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
    cin >> n;
    set<string> roots;
    forn(i, 0, n) {
        set<char> s;
        string st;
        cin >> st;
        string root = "";
        forn(j, 0, st.size()) {
            if (!s.count(st[j])) {
                root += st[j];
                s.insert(st[j]);
            }
        }
        sort(all(root));
        roots.insert(root);
    }
    cout << roots.size() << endl;
    return 0;
}
