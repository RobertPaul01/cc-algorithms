#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
    int arr[10005];
    int deleteAndEarn(vector<int>& nums) {
        memset(arr,0,sizeof(arr));
        for (int i : nums) arr[i] += i;
        int m = 0;
        for (int i = 1; i < 10000; i++) {
            int lmax = 0;
            for (int j = i; j > 0 && j > i-3; j--) {
                if (i-j > 1) {
                    lmax = max(lmax,arr[j]+arr[i]);
                } else {
                    lmax = max(lmax,arr[j]);
                }
            }
            arr[i] = lmax;
            m = max(m,lmax);
        }
        return m;
    }
};
