class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res=0, count=1;
         if(nums[0]==0)
            {
                res++;
            }
        for(long long i=1; i<nums.size(); i++)
        {
            if(nums[i-1]==0 && nums[i]==0)
            {
                count++;
            res+=count;
            } 
            else if(nums[i]==0){
                count=1;
                res+=count;
            }
                
        }
        return res;
    }
};