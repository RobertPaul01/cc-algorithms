#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int sum = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size() - 2; i++) {
            int j = i + 1, k = (int)nums.size() - 1;
            while (j < k) {
                int nSum = nums[i] + nums[j] + nums[k];
                if (abs(target - nSum) < abs(target - sum)) sum = nSum;
                if (nSum < target) j++;
                else k--;
            }
        }
        return sum;
    }
};
