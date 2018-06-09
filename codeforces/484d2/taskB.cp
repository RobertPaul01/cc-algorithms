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
    priority_queue<pii, vector<pii>, greater<pii>> zero;
    priority_queue<pii, vector<pii>, less<pii>> one;
    forn(i, 0, n) {
        int wi;
        scanf("%d ", &wi);
        zero.push({wi, i + 1});
    }
    string s;
    getline(cin, s);
    forn(i, 0, s.size()) {
        if (s[i] == '0') {
            pii top = zero.top();
            zero.pop();
            one.push(top);
            printf("%d ", top.second);
        } else {
            pii top = one.top();
            one.pop();
            printf("%d ", top.second);
        }
    }
    return 0;
}
