#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 1000005;
int s[N];
ll invs = 0;

vector<int> merge(int l, int r) {
    if (l == r) {
        return { s[l] };
    }
    int d = (r - l) / 2;
    vector<int> a = merge(l, l + d);
    vector<int> b = merge(l + d + 1, r);
    vector<int> ret;
    for (int i = 0, j = 0; i < a.size() || j < b.size();) {
        if (i == a.size()) {
            ret.push_back(b[j]);
            invs += a.size() - i;
            j++;
        } else if (j == b.size()) {
            ret.push_back(a[i]);
            i++;
        } else if (a[i] > b[j]) {
            ret.push_back(b[j]);
            invs += a.size() - i;
            j++;
        } else {
            ret.push_back(a[i]);
            i++;
        }
    }
    return ret;
}

void gen() {
    int n = 100;
    int r = rand() * 10;
    cout << n << endl;
    for (int i = 0; i < n; i++) {
        cout << (i + r) % n << " ";
    }
    exit(0);
}
int main() {
    #ifdef DEBUG
//    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    int n;
    scanf("%d", &n);
    forn(i, 0, n) {
        scanf(" %d", &s[i]);
    }
    merge(0, n - 1);
    if (3*n%2 == invs%2) {
        printf("Petr\n");
    } else {
        printf("Um_nik\n");
    }
    return 0;
}
