#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    	int left = 1;
    	vector<int> solution;
    	for (int i = 0; i < nums.size(); i++) {
    		solution.push_back(left);
    		left *= nums[i];
    	}
    	int right = 1;
    	for (int i = nums.size() - 1; i > -1; i--) {
    		solution[i] *= right;
    		right *= nums[i];
    	}
    	return solution;
    }
};
