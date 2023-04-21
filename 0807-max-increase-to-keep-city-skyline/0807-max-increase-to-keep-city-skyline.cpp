class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size(), minm=0, maxr=0, maxc=0, count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int k=0; k<n; k++ )
                {
                    maxr=max(maxr,grid[i][k]);
                    maxc=max(maxc,grid[k][j]);
                }
                minm= min(maxr,maxc);
                if(minm>grid[i][j])
                {
                count += minm-grid[i][j];
                grid[i][j]=minm;
                }

                minm=0, maxr=0, maxc=0;
                
            }
        }
        return count;
    }
};