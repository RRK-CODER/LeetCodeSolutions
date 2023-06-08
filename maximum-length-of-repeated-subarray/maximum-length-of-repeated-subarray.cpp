class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size(),result=0;
        int dp[m+1][n+1];
        for(int i=0; i<=m; i++)
        dp[i][0];
        for(int i=0; i<=n; i++)
            dp[0][i];
            
        for(int i=0; i<=m ;i++)
        {
            for(int j=0;j<=n; j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
                else if(nums1[i-1]==nums2[j-1])
                { dp[i][j]=1+ dp[i-1][j-1];
                result=max(result,dp[i][j]);}  
                else
                {
                    dp[i][j]=0;
                }
                    
            }
        }
        return result;
    }
};