class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()<=2) return true;
        int diff=nums[1]-nums[0];
        for(int i=2; i<nums.size(); i++)
        {
            if(diff>0)
            {
                if(nums[i]-nums[i-1]<0)
                return false;
            }
            else if(diff==0)
            {
                diff=nums[i]-nums[i-1];
            }
            else
            {
                if(nums[i]-nums[i-1]>0)
                return false;
            }
        }
        return true;
    }
};