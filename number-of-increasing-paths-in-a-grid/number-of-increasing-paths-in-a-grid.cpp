class Solution {
    const int mod=1e9+7;
    int dp[1000][1000] = {};
    int dfs(vector<vector<int>>& g, int i, int j, int v){
        if(min(i,j)<0 || i>=g.size() || j>=g[i].size() || g[i][j]<=v) return 0;
        return dp[i][j] ?: dp[i][j] =(1LL+dfs(g,i+1, j, g[i][j]) + dfs(g,i-1, j, g[i][j]) + dfs(g,i,j+1, g[i][j]) + dfs(g,i,j-1, g[i][j]))%mod;
    }
public:
    int countPaths(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size(), res=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                res= (res+dfs(grid,i,j,0))%mod;
            }
        }
        return res;
    }
};