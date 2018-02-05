#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string,int> m;
        for (string s : strs) {
            string x = s;
            sort(x.begin(),x.end());
            if (!m.count(x)) {
                m[x] = (int)result.size();
                result.push_back({s});
            } else {
                result[m[x]].push_back(s);
            }
        }
        return result;
    }
};
