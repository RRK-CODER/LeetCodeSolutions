class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int >s;
        int pre_sum=0;
      for(int i=0; i<nums.size(); i++)
        { 
            pre_sum=pre_sum+nums[i];
          pre_sum%=k;
            if(pre_sum==0 && i)
                return true;
            if(s.find(pre_sum)!=s.end())
         {
           if(i - s[pre_sum]>1) return true;
           }
          else s[pre_sum]=i;
        }
        return false;
    }
};