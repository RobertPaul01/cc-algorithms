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
    vector<int> w(n);
    forn(i, 0, n) {
        scanf("%d", &w[i]);
    }
    sort(all(w));
    vector<int> piles;
    int end = 0;
    for (int i = n - 1; i >= end; i--) {
        int x = -1;
        int mn = INT_MAX;
        for (int j = 0; j < piles.size(); j++) {
            int loss = piles[j] - w[i];
            if (loss >= 0 && loss < mn) {
                x = j;
                mn = loss;
            }
        }
        if (x != -1) {
            piles[x] = min(piles[x], w[i]) - 1;
        } else {
            piles.push_back(w[i] - 1);
        }
//        cout << w[i] << ":" << endl;
//        for (int x : piles) {
//            cout << x << " ";
//        }
//        cout << endl;
    }
    printf("%d\n", (int)piles.size());
    return 0;
}
