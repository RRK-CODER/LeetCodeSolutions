class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int, int> mp1, mp2;
        int n=nums.size();
        for(auto i: nums)
            mp2[i]++;
        for(int i=0; i<n; i++)
        {
            int x= ++mp1[nums[i]];
            int y= --mp2[nums[i]];
            if(2*x>(i+1) && 2*y>(n-i-1))
            return i;
        }
        return -1;
    }
};