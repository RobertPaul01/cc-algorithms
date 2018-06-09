#include "bits/stdc++.h"
using namespace std;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

class Parser {
public:
    vector<int> parseVI() {
        string s;
        getline(cin, s);
        vector<int> ret;
        string cur = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '[') {
            } else if (s[i] == ']') {
                if (cur.size() > 0) {
                    ret.push_back(stoi(cur));
                    cur = "";
                }
            } else if (s[i] == ',') {
                if (cur.size() > 0) {
                    ret.push_back(stoi(cur));
                    cur = "";
                }
            } else {
                cur += s[i];
            }
        }
        return ret;
    }
    vector<vector<int>> parseVVI() {
        string s;
        getline(cin, s);
        vector<vector<int>> ret;
        vector<int> v;
        string cur = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '[') {
            } else if (s[i] == ']') {
                if (cur.size() > 0) {
                    v.push_back(stoi(cur));
                    vector<int> c(v);
                    ret.push_back(c);
                    cur = "";
                    v.clear();
                }
            } else if (s[i] == ',') {
                if (cur.size() > 0) {
                    v.push_back(stoi(cur));
                    cur = "";
                }
            } else {
                cur += s[i];
            }
        }
        return ret;
    }
    string parseString() {
        string s;
        getline(cin, s);
        string ret = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '\"') ret += s[i];
        }
        return ret;
    }
};
