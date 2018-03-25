#include "bits/stdc++.h"
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
    vector<pair<double, int>> avgs;

    bool subsets(vector<int>& v, double avg) {
        int n = (int)v.size();
        for (int b = 0; b < (1<<n); b++) {
            double a = 0;
            int sa = 0;
            for (int i = 0; (1<<i) < (1<<n); i++) {
                if (b&(1<<i)) {
                    a += v[i];
                    sa++;
                }
            }
            avgs.push_back({a, sa});
        }
        return false;
    }
    
    bool subsets2(vector<int>& v, double sum, double avg) {
        int n = (int)v.size();
        for (int b = 0; b < (1<<n); b++) {
            double a = 0;
            int sa = 0;
            for (int i = 0; (1<<i) < (1<<n); i++) {
                if (b&(1<<i)) {
                    a += v[i];
                    sa++;
                }
            }
            for (pair<double, int> p : avgs) {
                double q, sq;
                tie(q, sq) = p;
                int x = sq + sa;
                if (x < n) {
                    if ((q + a) / x == avg && sum - q / sq == avg) {
                        return true;
                    }
                }
                int y = sa + (n / 2 - sq);
                if (y < n) {
                    if ((a + (sum - q)) / y == avg && q / sq == avg) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    
    bool splitArraySameAverage(vector<int>& A) {
        double sum = 0;
        int n = (int) A.size();
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < n; i++) {
            if (i < n / 2) a.push_back(A[i]);
            else b.push_back(A[i]);
            sum += A[i];
        }
        subsets(a, sum / n);
        return subsets2(b, sum, sum / n);
    }
};

int main() {
    Solution s;
    vector<int> v = {1,2,3,4,5,6,7,8};
//    vector<int> v = {5,3,11,19,2};
//    vector<int> v = {0,13,13,7,5,0,10,19,5}; // true
//    vector<int> v = {33,86,88,78,21,76,19,20,88,76,10,25,37,97,58,89,65,59,98,57,50,30,58,5,61,72,23,6};
    cout << s.splitArraySameAverage(v);
    cout << endl;
}
