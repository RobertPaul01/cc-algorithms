#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        int mx = INT_MIN;
        for (int i = 1; i < A.size(); i++) {
            if (mx > A[i]) {
                return false;
            }
            mx = max(mx, A[i-1]);
        }
        return true;
    }
};
