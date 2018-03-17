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

const int N = 2005;
const int M = 4;
int arr[N];
int dp[M] = { 0 };

int main() { _
    int n; cin >> n;
    forn(i, n) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1){
            dp[0]++;
            dp[2] = max(dp[1] + 1, dp[2] + 1);
        } else if (arr[i] == 2) {
            dp[1] = max(dp[0] + 1, dp[1] + 1);
            dp[3] = max(dp[2] + 1, dp[3] + 1);
        }
    }

    cout << max(dp[2], dp[3]) << endl;
}
