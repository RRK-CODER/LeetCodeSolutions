class Solution {
public:
    int rob1(vector<int>& nums) {
        int prev=0, prev2=0;
        for(auto num: nums)
        {
            int cur = max(prev, prev2+num);
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        vector<int> temp1, temp2;
        int n=nums.size();
        if(n==1) return nums[0];
        for(int i=0; i<n; i++)
        {
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        return max(rob1(temp1), rob1(temp2));
    }
};