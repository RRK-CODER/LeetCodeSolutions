class Solution {
public:
    int minimumMountainRemovals(vector<int>& arr) {
        int n=arr.size();
        vector<int> dp1(n,1);
        for(int i=0; i<n; i++){
            for(int prev=0; prev<i; prev++){
                if(arr[prev] < arr[i] && 1+dp1[prev] > dp1[i]){
                    dp1[i] = 1+dp1[prev];
                }
            }
        }

        vector<int> dp2(n,1);
        for(int i=n; i>=0; i--){
            for(int prev=n-1; prev>i; prev--){
                if(arr[prev] < arr[i] && 1+dp2[prev] > dp2[i]){
                    dp2[i] = 1+dp2[prev];
                }
            }
        }
        int mx=0;
for(int i=0;i<n;i++)
            if(dp1[i]>=2 && dp2[i]>=2)
            mx=max(mx,dp1[i]+dp2[i]-1);
        return n-mx;
    }
};