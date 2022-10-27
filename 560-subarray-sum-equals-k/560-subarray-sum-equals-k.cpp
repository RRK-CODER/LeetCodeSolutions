class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      unordered_map<int,int> s;
        int pre_sum=0, res=0;
        s[pre_sum]=1;
        for(int i=0; i<nums.size(); i++)
        {
        pre_sum+=nums[i];
           
            if(s.find(pre_sum-k)!=s.end()){
                   res+=s[pre_sum-k];
            }
             s[pre_sum]++;
        }
        return res;
    }
};