class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
        int n=A.size(), res=2;
        vector<vector<int>> dp(n, vector<int> (2000, 0));
        for(int i=0; i<n; ++i)
        {
            for(int j=i+1; j<n; ++j)
            {
                int d=A[j]-A[i]+1000;
                dp[j][d] = max(2, dp[i][d] + 1);
                res = max(res, dp[j][d]);
            }
        }
        return res;
    }
};