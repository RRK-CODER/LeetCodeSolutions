class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> m(nums.begin(), nums.end());
        vector<int> ans(size(nums)-size(m));
        for(int i=1, j=0; i<=nums.size(); i++)
        {
            if(!m.count(i)) ans[j++]=i;
        }
        return ans;
        
        
        
        
    }
};