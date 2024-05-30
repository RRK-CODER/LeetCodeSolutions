class Solution {
    
    int findWays(vector<int>& nums, int tar)
    {
        int n=nums.size();
        vector<int> prev(tar+1,0);
        if(nums[0]==0) prev[0]=2;
        else prev[0]=1;
        if(nums[0]!=0 && nums[0]<=tar) prev[nums[0]]=1;
        for(int ind=1; ind<n; ind++){
            vector<int> cur(tar+1,0);
            for(int target =0; target<=tar; target++){
                int notTaken = prev[target];
                int taken = 0;
                if(nums[ind]<=target)
                    taken = prev[target-nums[ind]];
                cur[target]=taken + notTaken;
            }
            prev=cur;
        }
        return prev[tar];
    }
    int countPartitions(int n, int d, vector<int> &arr)
    {
        int totalSum = 0;
        for(auto it: arr) totalSum += it;
        if(totalSum - d < 0 || (totalSum - d)%2 ) return false;
        return findWays(arr, (totalSum-d)/2);
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        // for(int i=0; i<n; i++){
        //     totalSum += nums[i];
        // }
        // if(totalSum-target <0 || (totalSum-target)%2) return 0;
        return countPartitions(n, target, nums);
    }
};