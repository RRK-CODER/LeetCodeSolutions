class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
          int pre_sum=0;
       for(int i=0; i<nums.size(); i++)
        {
            pre_sum+=nums[i];
         }
        int sum=0;
        for(int i=0; i< nums.size(); i++)
        {
            if(sum==pre_sum-sum-nums[i]){
            return i;
            }
          sum+=nums[i];
        }
        return -1;
        
    }
};