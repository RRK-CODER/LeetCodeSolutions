class Solution {
public:
    int largestAltitude(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n-1; i++)
            nums[i+1]+=nums[i];
        int ans=INT_MIN;
        for(int i=0; i<n; i++)
            ans=max(ans, nums[i]);
        if(ans<0) ans=0;
        return ans;
    }
};