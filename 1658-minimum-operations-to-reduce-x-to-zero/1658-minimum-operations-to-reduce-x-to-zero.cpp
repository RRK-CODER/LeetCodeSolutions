class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        unordered_map <int, int > left;
        left.emplace(0,-1);
        int res=INT_MAX;
        for(int l=0,sum=0; l<nums.size() && sum<=x; l++)
        {
           left.emplace(sum+=nums[l],l);
        }
        for(int r=nums.size()-1,sum=0 ; r>=0 && sum<=x; r-- )
        {
            auto it=left.find(x-sum);
            if(it!= end(left) && r >=it->second){
                res=min(res, (int)nums.size()-r+it->second);
                
            }
            sum+=nums[r];
        }
        return res==INT_MAX ? -1 : res;
    }
};