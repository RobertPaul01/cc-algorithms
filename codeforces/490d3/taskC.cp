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

int n, k;
string s;

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    scanf("%d %d ", &n, &k);
    getline(cin, s);

    for (char c = 'a'; c <= 'z' && k > 0; c++) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c) {
                s[i] = '#';
                k--;
                if (k == 0) {
                    break;
                }
            }
        }
    }
    
    string str;
    for (char c : s) {
        if (c != '#') {
            str += c;
        }
    }
    
    printf("%s\n", str.c_str());
    return 0;
}
