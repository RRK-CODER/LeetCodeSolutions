class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& num, int k) {
        int n=num.size();
        vector<int> dp(n+1, 0);
        for(int ind=n-1; ind>=0; ind--){
            int len=0, maxi=INT_MIN, maxAns=INT_MIN;
            for(int j=ind; j<min(ind+k, n); j++){
                len++;
                maxi = max(maxi, num[j]);
                int sum=len*maxi+dp[j+1];
                maxAns=max(maxAns, sum);
            }
            dp[ind]=maxAns;
        }
        return dp[0];
    }
};