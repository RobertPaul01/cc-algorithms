#include "bits/stdc++.h"

using namespace std;

int main() {
    long long n;
    cin >> n;
    long a[n], b[n];
    long sumA = 0;
    long sumB = 0;
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        sumA += a[i];
    }
    for (long long i = 0; i < n; i++) {
        cin >> b[i];
        sumB += b[i];
    }
    
    for (int i = 0; i < n; i++ ) {
        if (a[i] > b[i]) {
            sumB += a[i]-b[i];
        } else {
            sumA += b[i]-a[i];
        }
    }
    cout << (sumA%2==0&&abs(sumA-sumB) == 3 ? "Yes" : "No") << endl;
    return 0;
}

