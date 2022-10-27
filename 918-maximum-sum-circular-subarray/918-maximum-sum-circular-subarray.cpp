class Solution {
public:
    int SubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int res=nums[0];
        int maxEnding=nums[0];
        for(int i=1; i<n; i++)
        {
maxEnding=max(nums[i],maxEnding + nums[i]);
            res=max(res,maxEnding);
            
            }
        return res;
    }
    
    int maxSubarraySumCircular(vector <int>& nums)
    {
         int n=nums.size();
        int max_normal=SubarraySumCircular(nums);
        if(max_normal<0)
            return max_normal;
        
        int arr_sum=0;
        for(int i=0; i<n; i++)
        {
         arr_sum += nums[i];
        nums[i] = -nums[i];}
        
        int max_circular=arr_sum + SubarraySumCircular(nums);
        return max(max_normal, max_circular);
    }
};