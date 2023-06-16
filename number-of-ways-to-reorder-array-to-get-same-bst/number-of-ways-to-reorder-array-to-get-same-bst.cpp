class Solution {
    int mod=1e9+7;
    long dfs(vector<int> &n){
        if(n.size() <=1) return 1;
        vector<int> n1, n2;
        copy_if(begin(n), end(n), back_inserter(n1), [&] (int i) { return i <n.front(); });
        copy_if(begin(n), end(n), back_inserter(n2), [&] (int i) { return i> n.front(); });
        return dfs(n1) * dfs(n2) % mod * comb(n1.size(), n2.size()) % mod;
    }

    int dp[1001][1001] = {};
    int comb(int n, int m){
        return n==0 || m==0 ? 1: dp[n][m] ? dp[n][m] : dp[n][m] = (comb(n-1, m) + comb(n, m-1)) % mod;
    }
public:

    int numOfWays(vector<int>& n) {
        return dfs(n)-1;
    }
};