#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int main() {
    string s;
    getline(cin, s);
    int k;
    scanf("%d", &k);
    unordered_set<string> subs;
    vector<string> vec;
    for (int x = 0; x <= s.size(); x++) {
        string q = "";
        for (int y = 0; y < k && x + y < s.size(); y++) {
            q += s[x + y];
            if (!subs.count(q)) {
                subs.insert(q);
                vec.push_back(q);
            }
        }
    }
    sort(all(vec));
    printf("%s\n", vec[k - 1].c_str());
    return 0;
}
