#import "bits/stdc++.h"
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, x, n) for (int i = x; i < n; i++)
#define fin(ds) for (auto &v : ds) cin >> v;
#define all(a) (a).begin(), (a).end()
#define nl '\n'
typedef long double ld;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;

class Solution {
public:
    int minSwap(vector<int>& A, vector<int>& B) {
        return -1;
    }
};

int main() {
    Solution s;
    vector<int> a = {0,4,4,5,9};
    vector<int> b = {0,1,6,8,10};
    
//    vector<int> a = {3,3,8,9,10};
//    vector<int> b = {1,7,4,6,8};
    
    cout << s.minSwap(a, b);
    
    cout << endl;
}
