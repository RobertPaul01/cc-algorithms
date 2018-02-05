#include "bits/stdc++.h"
using namespace std;

int main() {
    long n;
    cin >> n;
    long l = 0, r = n;
    long x = 0;
    string arr[n];
    cout << 0 << endl;
    cin >> arr[0];
    while (x < 25 && arr[0] != "Vacant") {
        long m = (l+r)/2;
        cout << m << endl;
        string s;
        cin >> s;
        if (s == "Vacant") exit(0);
        arr[m] = s;
        if (((m - l) % 2 == 1 && arr[m] == arr[l]) || ((m - l) % 2 == 0 && arr[m] != arr[l])) {
            r = m;
        } else {
            l = m;
        }
        x++;
    }
    return 0;
}
