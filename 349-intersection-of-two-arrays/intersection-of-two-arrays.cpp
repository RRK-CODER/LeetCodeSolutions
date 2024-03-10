class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         unordered_map<int, int> mp;
        unordered_set<int> mp1, mp2;
        for(auto i: nums1) mp1.insert(i);
        for(auto i: nums2) mp2.insert(i);
        for(auto i: mp1) mp[i]++;
        for(auto i: mp2) mp[i]++;

        vector<int> v;
        for(auto i: mp)
        {
            if(i.second>1)
            {
               v.push_back(i.first);
            }
        }
        return v;
    }
};