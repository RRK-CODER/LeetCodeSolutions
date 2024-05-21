class Solution {
public:
    int rob(vector<int>& nums) {
        int prev=0, prev2=0;
        for(auto num: nums)
        {
            int cur = max(prev, prev2+num);
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
};