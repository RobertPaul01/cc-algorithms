#include "bits/std++.h"
using namespace std;
class Solution {
public:
    void reverseWords(string &s) {
        reverse(s.begin(), s.end());
        istringstream iss(s);
        vector<string> results((istream_iterator<string>(iss)), istream_iterator<string>());
        s = "";
        for (auto &r : results) {
            if (s.length() > 0) s += " ";
            reverse(r.begin(), r.end());
            s += r;
        }
    }
};
