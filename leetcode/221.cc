#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.size() == 0) return 0;
        int dp[matrix.size()][matrix[0].size()];
        memset(dp,0,sizeof(dp));
        int maxLen = 0;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == '1') {
                    if (i > 0 && j > 0) {
                        dp[i][j] = min(min(dp[i][j-1],dp[i-1][j-1]),dp[i-1][j]) + 1;
                    } else {
                        dp[i][j] = 1;
                    }
                    maxLen = max(maxLen,dp[i][j]);
                }
            }
        }
        return maxLen*maxLen;
    }
};
