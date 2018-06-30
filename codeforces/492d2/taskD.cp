#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;
template <typename... Args>
void dbg(Args... args) {
    ((cout << args << " "), ...);
    cout << endl;
}
void gen() {exit(0);}

int main() {
    #ifdef DEBUG
    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
//    gen();
    #endif
    int n;
    scanf("%d", &n);
    int s = n * 2;
    int arr[s];
    forn(i, 0, s) {
        scanf(" %d", &arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < s; i += 2) {
        int y = -1;
        for (int j = i + 1; j < n * 2; j++) {
            if (arr[i] == arr[j]) {
                y = j;
                break;
            }
        }
        while (i != y - 1) {
            swap(arr[y - 1], arr[y]);
            y--;
            ans++;
        }
    }
    
    printf("%d\n", ans);
    return 0;
}
