class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> mp;
        unordered_set<int> mp1, mp2;
        for(auto i: nums1) mp1.insert(i);
        for(auto i: nums2) mp2.insert(i);
        for(auto i: mp1) mp[i]++;
        for(auto i: mp2) mp[i]++;
        int minm=1e9+7, res=1e9+7;
        for(auto i: mp)
        {
            if(i.second>1)
            {
                minm=min(minm, i.first);
                res=min(minm, res);
            }
        }
        if(res==1e9+7) return -1;
        else return res;
    }
};