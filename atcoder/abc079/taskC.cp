#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

void gen() {exit(0);}
int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    string s;
    getline(cin, s);
    int a = s[0] - '0';
    int b = s[1] - '0';
    int c = s[2] - '0';
    int d = s[3] - '0';
    vector<char> ops = {'+', '-'};
    int n = (int)ops.size();
    forn(i, 0, n) {
        forn(j, 0, n) {
            forn(k, 0, n) {
                int cur = a;
                if (ops[i] == '+') cur += b;
                else cur -= b;
                if (ops[j] == '+') cur += c;
                else cur -= c;
                if (ops[k] == '+') cur += d;
                else cur -= d;
                if (cur == 7) {
                    printf("%d%c%d%c%d%c%d=7\n", a, ops[i], b, ops[j], c, ops[k], d);
                    exit(0);
                }
            }
        }
    }
    return 0;
}
