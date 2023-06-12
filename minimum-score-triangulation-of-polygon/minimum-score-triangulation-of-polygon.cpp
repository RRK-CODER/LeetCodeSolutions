class Solution {
public:
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
        int dp[50][50] = {};
        for(int i=n-1; i>=0; --i){
            for(int j=i+1; j<n; ++j){
                for(auto k=i+1; k<j; ++k)
                    dp[i][j] = min(dp[i][j]==0 ? INT_MAX: dp[i][j], dp[i][k] + values[i] * values[k] * values[j] + dp[k][j]);
            }
        }
        return dp[0][n-1];
    }
};