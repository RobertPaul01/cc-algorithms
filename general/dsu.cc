#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int N = 10000;
int k[N];
int s[N];

int find(int x) {
    while (x != k[x]) x = k[x];
    return x;
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (s[a] < s[b]) swap(a,b);
    s[a] += s[b];
    k[b] = a;
}

int main() {
    forn(i, 0, N) k[i] = i;
    forn(i, 0, N) s[i] = i;
    return 0;
}
