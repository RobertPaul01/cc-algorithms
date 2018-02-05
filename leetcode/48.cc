#include "bits/std++.h"
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();      
        for (int i = 0; i < n; i++) {
            for (int j = i; j < m; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for (int i = 0; i < n ; i++) {
            for (int x = 0, y = m-1; x < y; x++, y--) {
                int temp = matrix[i][x];
                matrix[i][x] = matrix[i][y];
                matrix[i][y] = temp;
            }
        }
    }
};
