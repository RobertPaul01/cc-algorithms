#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

int sum = 0;
int curGain = 0;
int maxGain = -1;
deque<int> d;

int main() {
    int k, n;
    scanf("%d%d",&k,&n);
    
    vector<int> vals(k);
    forn(i, 0, k)
        scanf("%d",&vals[i]);
    
    forn(i, 0, k) {
        if (d.size() == n) {
            curGain -= d.front();
            d.pop_front();
        }
        int awake;
        scanf("%d",&awake);
        if (awake) {
            sum += vals[i];
            d.push_back(0);
        } else {
            curGain += vals[i];
            d.push_back(vals[i]);
            maxGain = max(maxGain, curGain);
        }
    }
    
    printf("%d\n",sum+max(maxGain, 0));
    
    return 0;
}
