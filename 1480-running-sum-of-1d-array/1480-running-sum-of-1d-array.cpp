class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int presum=0;
        vector <int> v;
        for(int i=0; i<nums.size(); i++)
        {
            presum+=nums[i];
     v.push_back(presum);
        }
        return v;
    }
};