class Solution {
public:
    int change(int target, vector<int>& nums) {
 int n=nums.size();
        vector<int> prev(target+1, 0), cur(target+1, 0);
        for(int T=0; T<=target; T++)
        {
            if(T%nums[0]==0) prev[T]=1;
        }
        for(int ind=1; ind<n; ind++)
        {
            for(int T=0; T<=target; T++)
            {
                int notTake=prev[T];
                int take=0;
                if(nums[ind]<=T){
                    take=cur[T-nums[ind]];
                }
                cur[T]=take+notTake;
            }
            prev=cur;
        }
        return prev[target];
    }
};