class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        vector<int> dp(n,1);
        vector<int> hash(n,1);

        for(int i=0; i<=n-1; i++){
            hash[i]=i;
            for(int prev_index=0; prev_index<=i-1; prev_index++){
                if(arr[i]%arr[prev_index]==0 && 1+dp[prev_index]>dp[i]){
                    dp[i] = 1 +dp[prev_index];
                    hash[i] = prev_index;
                }
            }
        }
        int ans=-1, lastindex=-1;
        for(int i=0; i<=n-1; i++){
            if(dp[i]>ans){
                ans=dp[i];
                lastindex=i;
            }
        }
        vector<int> temp;
        temp.push_back(arr[lastindex]);

        while(hash[lastindex] != lastindex){
            lastindex = hash[lastindex];
            temp.push_back(arr[lastindex]);
        }
        reverse(temp.begin(), temp.end());
        return temp;
            }
};