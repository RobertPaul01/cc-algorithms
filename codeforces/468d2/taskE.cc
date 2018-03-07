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

const int eng = 'z' + 1;
const int N = 5007;

int counts[eng - 'a'] = { 0 };
int dat[eng - 'a'][N][eng - 'a'] = { 0 };

signed main() { _
    string s; cin >> s;
    int n = (int)s.size();
    
    forn(i, n) {
        char c = s[i];
        counts[c - 'a']++;
        for (int j = (i + 1) % n, x = 0; x < n; j = (j + 1) % n, x++)
            dat[c - 'a'][x][s[j] - 'a']++;
    }
    
    double prob = 0;
    for (int c = 'a'; c < eng; c++) {
        double p_max = 0;
        double count = counts[c - 'a'];

        if (count > 0) {
            for (int x = 0; x < n; x++) {
                double p_loc = 0;
                
                for (int d = 'a'; d < eng; d++)
                    if (dat[c - 'a'][x][d - 'a'] == 1)
                        p_loc++;
                
                p_max = max(p_max, p_loc);
            }
            
            prob += (p_max / count) * (count / n);
        }
    }

    cout << prob << endl;
}
