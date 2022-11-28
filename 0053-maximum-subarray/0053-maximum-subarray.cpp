class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, maxm=-1000000;
        for(auto it : nums)
        {
            sum+=it;
            maxm=max(maxm,sum);
            if(sum<0)
                sum=0;
        }
        return maxm;
    }
};