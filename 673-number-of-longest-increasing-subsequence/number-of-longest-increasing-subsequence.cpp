class Solution {
public:
    int findNumberOfLIS(vector<int>& arr) {
        int n=arr.size(), maxi=INT_MIN;
        vector<int> dp(n,1), cnt(n, 1);
        
        for(int i=0; i<n; i++){
            for(int prev=0; prev<i; prev++){
                if(arr[prev]<arr[i] && 1+ dp[prev]> dp[i])
                {
                    dp[i] = 1+ dp[prev];
                    cnt[i]=cnt[prev];
                }
                else if(arr[prev]< arr[i] && 1+dp[prev]==dp[i]){
                    cnt[i]+=cnt[prev];
                }
            }
            maxi=max(maxi, dp[i]);
        }
        int nos=0;
        for(int k=0; k<n; k++){
            if(dp[k]==maxi)
                nos+= cnt[k];
        }
        return nos;
    }
};