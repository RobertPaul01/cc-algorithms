#include "bits/stdc++.h"

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    if (k > 70) {
        cout << "NO" << endl;
        exit(0);
    }
    set<int> s;
    for (int i = 1; i < k + 1; i++) {
        s.insert(n % i);
    }
    cout << (s.size() == k ? "YES" : "NO") << endl;
    return 0;
}
