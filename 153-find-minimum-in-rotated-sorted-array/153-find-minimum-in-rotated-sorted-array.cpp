class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        if(nums[0]<nums[nums.size()-1])
            return nums[0];
        int low=0,mid=0,ans=INT_MAX, high=nums.size()-1;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[0]<= nums[mid])
            {
               low=mid+1;}
            else
            {
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
}
        return ans;
    }
};