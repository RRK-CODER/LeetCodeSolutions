class Solution {
public:
    
    bool subsetSumToK(int n, int k, vector<int> &nums)
    {
    vector<bool> prev(k+1, 0), cur(k+1,0);
    prev[0]=cur[0]=true;
    if(nums[0]<=k) prev[nums[0]]=true;
    for(int ind=1; ind<n; ind++){
        for(int target=1; target<=k; target++){
            bool notTake= prev[target];
            bool take=false;
        if(nums[ind]<=target) take=prev[target-nums[ind]];
         cur[target] = take|notTake;
        }
        prev=cur;
    }
     return prev[k];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0, n=nums.size();
        for(int i=0; i<nums.size(); i++)
            sum+=nums[i];
        int tar=sum/2;
        if(sum%2!=0) return false;
        return subsetSumToK(n, tar, nums);
    }
};