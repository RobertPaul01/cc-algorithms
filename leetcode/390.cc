#import "bits/stdc++.h"
using namespace std;

class Solution {
public:
    int lastRemaining(int n) {
        if (n == 1) return n;
        int d = 2;
        int i = 2;
        int count = 0;
        while (true) {
            if (i + d > n || i + d < 1) {
                if (count == 0) break;
                i -= d;
                d *= -2;
                count = 0;
            } else {
                i += d;
                count++;
            }
        }
        return i;
    }
};
