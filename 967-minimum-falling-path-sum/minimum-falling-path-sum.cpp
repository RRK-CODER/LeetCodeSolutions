class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size(), m=matrix[0].size();
        vector<int> prev(m,0), cur(m,0);
        for(int i=m-1; i>=0; i--)
            prev[i]=matrix[0][i];
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++)
            {
                               int up=matrix[i][j]+prev[j];
                
                int leftDiagonal=matrix[i][j];
                if(j-1>=0) leftDiagonal+=prev[j-1];
                else leftDiagonal+=+1e9;
                
                int rightDiagonal=matrix[i][j];
                if(j+1<m) rightDiagonal+=prev[j+1];
                else rightDiagonal+= +1e9;
                
                cur[j]=min(up, min(leftDiagonal, rightDiagonal));
            }
            prev = cur;
        }
int mini=INT_MAX;
        
        for(int j=0; j<m ; j++)
        {
            mini=min(mini,prev[j]);
        }
        return mini;
    }
};