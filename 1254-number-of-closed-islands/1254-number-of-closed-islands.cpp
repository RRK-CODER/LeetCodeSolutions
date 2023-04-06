class Solution {
    int dfs(vector<vector<int>>& g, int row , int col)
    {
        if(row<0 || row>=g.size() || col<0 || col>=g[0].size()){
            return 0;
        }
        if(g[row][col] ==1){
            return 1;
        }
        g[row][col]=1;
        int up = dfs(g, row-1, col);
        int down = dfs(g, row+1, col);
        int left = dfs(g, row, col-1);
        int right = dfs(g, row, col+1);
        return up & down & left & right;
    }
public:
    int closedIsland(vector<vector<int>>& g) {
        int count=0;
        for(int i=0; i<g.size(); i++)
        {
            for(int j=0; j<g[0].size(); j++){
                if(g[i][j]==0){
                    count+=dfs(g,i,j);
                }
            }
        }
        return count;
    }
};