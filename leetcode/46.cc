#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> perms;
        stack<vector<int>> s;
        for (int n : nums) s.push({n});
        while (!s.empty()) {
            vector<int> top = s.top(); s.pop();
            if (top.size() != nums.size()) {
                for (int n : nums) {
                    vector<int> nTop(top);
                    if (find(nTop.begin(),nTop.end(),n) == nTop.end()) {
                        nTop.push_back(n);
                        s.push(nTop);
                    }
                }
            } else {
                perms.push_back(top);
            }
        }
        return perms;
    }
};
