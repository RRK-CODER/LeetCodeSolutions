class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& num) {
        int n=num.size(), m=num[0].size(), mod=2* 1e9;
        vector<int> prev(m, 0);

        for(int i=0; i<n; i++)
        {
            vector<int> cur(m, 0);
            for(int j=0; j<m; j++)
            {
             if(num[i][j]==1)
                 cur[j]=0;
             else if(i==0 && j==0) cur[j]=1;
             else{
                 int up=0, left=0;
                 if(i>0) up = prev[j];
                 if(j>0) left= cur[j-1];
                 cur[j]=(left+up)%mod;
             }
            }
            prev=cur;
        }
        return prev[m-1];
        
    }
};