#include "bits/stdc++.h"

using namespace std;

long long gcd(long long a, long long b) {
    if (b > a) return gcd(b, a);
    long long x = a % b;
    if (x == 0) return b;
    return gcd(b, x);
}

int main() {
    long long n, k;
    cin >> n >> k;
    if (k != 1 && k >= n) {
        cout << "NO" << endl;
    } else {
        cout << (gcd(k,n) == 1 ? "YES" : "NO") << endl;
    }
    return 0;
}
