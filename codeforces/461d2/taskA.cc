#include "bits/stdc++.h"

using namespace std;

int main() {
    int c, o;
    cin >> c >> o;
    if (o == 0 || (c > 0 && o == 1)) {
        cout << "NO" << endl;
    } else if (c == o-1) {
        cout << "YES" << endl;
    } else if (c > o && (c-(o-1))%2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
