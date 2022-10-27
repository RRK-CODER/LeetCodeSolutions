class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int pre_sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            pre_sum+=nums[i];
            pre_sum%=k;
            if(pre_sum==0 && i)
            return true;
            if(mp.find(pre_sum)!=mp.end())
            {
                if(i-mp[pre_sum]>1)
                return true;
                 }
                else
                mp[pre_sum]=i;
           

        }
        return false;
    }
};