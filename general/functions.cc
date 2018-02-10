#include "bits/stdc++.h"

using namespace std;

vector<vector<int>> subsets(vector<int>& v) {
    size_t n = v.size();
    vector<vector<int>> subsets;
    for (int b = 0; b < (1<<n); b++) {
        vector<int> ss;
        for (int i = 0; i < b; i++) {
            if (b&(1<<i)) ss.push_back(v[i]);
        }
        subsets.push_back(ss);
    }
    return subsets;
}

vector<vector<int>> permutations(vector<int>& v) {
    vector<int> p(v);
    vector<vector<int>> permutations;
    do {
        permutations.push_back(p);
    } while(next_permutation(p.begin(),p.end()));
    return permutations;
}
