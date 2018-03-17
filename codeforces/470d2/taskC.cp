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

int main() { _
    int n; cin >> n;
    vector<int> add(n); fin(add);
    vector<int> melt(n); fin(melt);
   
    priority_queue<ll, vector<ll>, greater<ll>> q;
    ll melted = 0;
    
    forn(i, n) {
        ll today = 0;
        q.push(add[i] + melted);

        while (!q.empty() && q.top() <= melted + melt[i]) {
            today += (q.top() - melted);
            q.pop();
        }
        melted += melt[i];

        today += (melt[i] * q.size());
        cout << today << " ";
    }
    
    cout << endl;
}
