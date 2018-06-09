#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

const int SIZE = 4;
vector<int> vals;

int main() {
    int n;
    scanf("%d",&n);
    int N = n*n;

    forn(i, 0, SIZE) {
        int curVal = 0;
        forn(x, 0, n) {
            char buf[n];
            scanf("%s",buf);
            string line(buf);
            forn(y, 0, n) {
                char color = line[y];
                curVal += (x+y)%2 != (color - '0');
            }
        }
        vals.push_back(curVal);
    }
    
    sort(all(vals));
    int a = vals[0] + vals[1] + (N - vals[2]) + (N - vals[3]);
    int b = (N - vals[0]) + (N - vals[1]) + vals[2] + vals[3];

    printf("%d\n",min(a,b));
    return 0;
}
