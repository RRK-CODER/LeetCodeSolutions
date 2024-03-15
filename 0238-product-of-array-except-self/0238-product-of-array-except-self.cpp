class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> right(n), left(n);
        int l=1, r=1;
        for(int i=0; i<n; i++)
        {   left[i]=l;
            if(i!=n-1)
                l=l* nums[i];
        }
        
        for(int i=n-1; i>=0; i--)
        {
            right[i]=r;
            if(i!=0)
                r=r*nums[i];
        }
        for(int i=0; i<n; i++)
            nums[i]=left[i]*right[i];
        return nums;
    }
};