class Solution {
public:
    int dir[4][2]={{1,0}, {0,1}, {-1,0}, {0,-1}};
    int dfs(vector<vector<int>>& g, int r, int c){
        if(r<0 || c<0 || r>=g.size() || c>=g[0].size() || g[r][c]==0) return 0;
        int res=g[r][c];
        g[r][c]=0;
        for(auto d:dir){
            res+=dfs(g, r+d[0], c+d[1]);
        }
        return res;
    }
    int findMaxFish(vector<vector<int>>& g) {
        int ans=0, n=g.size(), m=g[0].size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
               ans=max(ans, dfs(g, i, j));
            }
        }
        return  ans;
    }
};