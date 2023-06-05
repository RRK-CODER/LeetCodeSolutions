class Solution {
public:
    int coinChange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> prev(target+1, 0), cur(target+1, 0);
        for(int T=0; T<=target; T++)
        {
            if(T%nums[0]==0) prev[T]=T/nums[0];
            else
            prev[T]=1e9;
        }
        for(int ind=1; ind<n; ind++)
        {
            for(int T=0; T<=target; T++)
            {
                int notTake=0+prev[T];
                int take=INT_MAX;
                if(nums[ind]<=T){
                    take=1+cur[T-nums[ind]];
                }
                cur[T]=min(take, notTake);
            }
            prev=cur;
        }
        int ans=prev[target];
        if(ans>=1e9) return -1;
        else return ans;
    }
};