#include "bits/stdc++.h"
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forn(i, n) for (int i = 0; i < n; i++)
#define fin(ds) for (auto &v : ds) cin >> v;
#define all(a) (a).begin(), (a).end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define nl '\n'

typedef long long ll;

struct node {
    int round;
    int team;
    struct node *left, *right;
};

node* construct(int n, int s, int e) {
    node *temp = new node;
    temp->round = n;
    if (n == 0) {
        temp->team = e;
        temp->left = temp->right = 0;
        return temp;
    }
    int half = (e - s + 1) / 2;
    temp->left = construct(n - 1, s, s + half - 1);
    temp->right = construct(n - 1, s + half, e);
    return temp;
}

int fn(node* x, int team, vector<node *> &path) {
    if (x && x->team == team) {
        path.push_back(x);
        return 1;
    }
    if (x->left && x-> right && (fn(x->left, team, path) || fn(x->right, team, path))) {
        path.push_back(x);
        return 1;
    }
    return 0;
}

int main() { _
    int n; cin >> n;
    int a, b; cin >> a >> b;
    int rounds = -1;
    int x = n;
    while (x != 0) {
        x >>= 1;
        rounds++;
    }
    
    node* root = construct(rounds, 1, n);
    vector<node*> path1;
    vector<node*> path2;
    fn(root, a, path1);
    fn(root, b, path2);
    
    int round = -1;
    for (node* n : path1)
        for (node* m : path2)
            if (n == m && round == -1)
                round = n->round;
                
    if (round != rounds) {
        cout << round << endl;
    } else {
        cout << "Final!" << endl;
    }
}
