#include "bits/stdc++.h"
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, n) for (int i = 0; i < n; i++)
#define fin(ds) for (auto &v : ds) cin >> v;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define nl '\n'

typedef long long ll;

vector<vector<char>> subsets(vector<char>& v) {
    size_t n = v.size();
    vector<vector<char>> subsets;
    for (int b = 0; b < (1<<n); b++) {
        vector<char> ss;
        for (int i = 0; i < b; i++) {
            if (b&(1<<i)) ss.push_back(v[i]);
        }
        if (ss.size() <= 3) {
            subsets.push_back(ss);
        }
    }
    return subsets;
}

int main() { _
    int n; cin >> n;
    
    ll people = 0;
    map<char, int> counts;
    vector<char> pep;
    forn(i, n) {
        string s; cin >> s;
        if (s[0] == 'M' || s[0] == 'A' || s[0] == 'R' || s[0] == 'C' || s[0] == 'H') {
            if (!counts.count(s[0])) {
                counts[s[0]] = 1;
                pep.push_back(s[0]);
            } else {
                counts[s[0]]++;
            }
        }
    }
    
    vector<vector<char>> comb = subsets(pep);
    for (vector<char> ss : comb) {
        if (ss.size() == 3) {
            ll cur = 1;
            for (char c : ss) {
                cur *= counts[c];
            }
            people += cur;
        }
    }
    
    cout << people << nl;
}
