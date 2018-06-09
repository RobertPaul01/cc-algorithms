#include "bits/stdc++.h"
using namespace std;
#define forn(i, x, n) for (int i = x; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
typedef long double ld;
typedef long long ll;

ll cross(pll a, pll b) {
    return a.first * b.second - a.second * b.first;
}

pll sub(pll a, pll b) {
    return {a.first - b.first, a.second - b.second};
}

vector<pll> line1;
vector<pll> line2;
vector<pll> open;

int main() {
    int n;
    scanf("%d",&n);
    bool ans = true;
    forn(p, 0, n) {
        pii d;
        scanf("%d%d",&d.first,&d.second);
        if (line1.empty()) {
            if (open.size() < 2) {
                open.push_back(d);
            } else {
                do {
                    if (cross(sub(open[1], open[0]), sub(d, open[0])) == 0) {
                        line1.push_back(open[0]);
                        line1.push_back(open[1]);
                        break;
                    }
                } while(next_permutation(open.begin(),open.end()));
                if (line1.empty()) {
                    open.push_back(d);
                    if (open.size() == 5) {
                        ans = false;
                        break;
                    }
                } else {
                    auto iter = open.begin();
                    while (iter != open.end()) {
                        pii q = *iter;
                        if (cross(sub(line1[1], line1[0]), sub(q, line1[0])) == 0) {
                            iter = open.erase(iter);
                        } else {
                            ++iter;
                        }
                    }
                }
            }
        } else if (cross(sub(line1[1], line1[0]), sub(d, line1[0])) == 0) {
        } else if (line2.empty()) {
            if (open.size() < 2) {
                open.push_back(d);
            } else {
                do {
                    if (cross(sub(open[1], open[0]), sub(d, open[0])) == 0) {
                        line2.push_back(open[0]);
                        line2.push_back(open[1]);
                        break;
                    }
                } while(next_permutation(open.begin(),open.end()));
                if (line2.empty()) {
                    open.push_back(d);
                    if (open.size() == 3) {
                        ans = false;
                        break;
                    }
                }
            }
        } else if (cross(sub(line2[1], line2[0]), sub(d, line2[0])) == 0) {
        } else {
            ans = false;
            break;
        }

    }
    printf(ans ? "YES\n" : "NO\n");
    return 0;
}
