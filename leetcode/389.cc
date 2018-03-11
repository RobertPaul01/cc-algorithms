#import "bits/stdc++.h"
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int counts[255] = {0};
        
        for (char c : s) {
            counts[c]++;
        }
        
        for (char c : t) {
            counts[c]--;
            if (counts[c] < 0) return c;
        }
        
        return 'x';
    }
};


