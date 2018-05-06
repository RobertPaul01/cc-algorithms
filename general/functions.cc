#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> subsets(vector<int>& v) {
    size_t n = v.size();
    vector<vector<int>> subsets;
    for (int b = 0; b < 1<<n; b++) {
        vector<int> ss;
        for (int i = 0; i < b; i++) {
            if (b&(1<<i)) ss.push_back(v[i]);
        }
        subsets.push_back(ss);
    }
    return subsets;
}

vector<vector<int>> permutations(vector<int>& v) {
    vector<int> p(v);
    vector<vector<int>> permutations;
    do {
        permutations.push_back(p);
    } while(next_permutation(p.begin(),p.end()));
    return permutations;
}

vector<vector<int>> sparse_table(vector<int>& v) {
    vector<int> log_table(v.size() + 1, 0);
    for (int i = 2; i < log_table.size(); i++)
        log_table[i] = log_table[i/2] + 1;
    
    vector<vector<int>> s_table(log_table.back() + 1, vector<int>(v.size()));
    s_table[0] = v;
    for (int row = 1; row < s_table.size(); row++) {
        for (int i = 0; i + (1 << row) <= v.size(); i++) {
            s_table[row][i] = min(s_table[row-1][i], s_table[row-1][i+(1<<(row-1))]);
        }
    }
    
    return s_table;
}

int sparse_table_query(vector<vector<int>>& s_table, int l, int r) {
    vector<int> log_table(s_table[0].size() + 1, 0);
    for (int i = 2; i < log_table.size(); i++)
        log_table[i] = log_table[i/2] + 1;
    
    int log = log_table[r - l];
    int query = min(s_table[log][l], s_table[log][r - (1 << log)]);
    return query;
}

bool isPrime(int n) {
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return false;
    return true;
}

vector<int> sieve(int n) {
    vector<int> v;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for(int i = 2; i <= n; i++) {
        if (prime[i]) {
            v.push_back(i);
            for (int j = i + i; j <= n; j += i) prime[j] = false;
        }
    }
    return v;
}

int catalan(int n, vector<int> &memo) {
    if (n == 0) {
        memo[n] = 1;
    } else if (!memo[n]) {
        int cn = 0;
        for (int i = 0; i < n; i++)
            cn += catalan(i, memo) * catalan(n - i - 1, memo);
        memo[n] = cn;
    }
    return memo[n];
}

int main() {
    return 0;
}
