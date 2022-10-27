class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int> mp;
        for(int n:nums)mp[n]++;
        for(auto e:mp)
        if(e.second==2) v.push_back(e.first);
        return v;
    }
};