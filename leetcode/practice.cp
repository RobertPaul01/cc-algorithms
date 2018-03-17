#import "bits/stdc++.h"
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn = INT_MAX;
        for (int x : nums) mn = min(mn, x);
        int dif = 0;
        for (int x : nums) dif += x - mn;
        return dif;
    }
};

int main() {
    Solution s;
}
