class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans1, ans2;
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        for(auto i: s1)
        {
            if(s2.count(i)==0)
            ans1.push_back(i);
        }
        for(auto i: s2)
        {
            if(s1.count(i)==0)
            ans2.push_back(i);
        }
        return {ans1, ans2};
    }
};