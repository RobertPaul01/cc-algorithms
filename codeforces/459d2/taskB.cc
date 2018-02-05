#include "bits/stdc++.h"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
    int n, m;
    cin >> n >> m;
    map<string, string> map;
    for (int i = 0; i < n; i++) {
        string name, ip;
        cin >> name >> ip;
        map[ip] = name;
    }
    vector<string> output;
    for (int i = 0; i < m; i++) {
        string command, ip;
        cin >> command >> ip;
        ip = ip.substr(0, ip.length() - 1);
        string o;
        o = command + " " + ip + "; #" + map[ip];
        output.push_back(o);
    }
    for (string o : output) {
        cout << o << endl;
    }
    return 0;
}

