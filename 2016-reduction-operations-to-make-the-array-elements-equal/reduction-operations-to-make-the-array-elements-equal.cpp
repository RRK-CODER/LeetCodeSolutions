class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res=0, sz=nums.size();
        for(int j=sz-1; j>0; --j)
            if(nums[j-1]!=nums[j])
                res+=sz-j;
        return res;
    }
};