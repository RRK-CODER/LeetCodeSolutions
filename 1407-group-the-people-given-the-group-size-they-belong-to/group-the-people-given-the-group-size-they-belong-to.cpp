class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& v) {
        unordered_map<int, vector<int>> mp;
        vector<vector<int>> ans;
        int n = v.size();
        for(int i=0; i<n; ++i) {
            mp[v[i]].push_back(i);
            if(mp[v[i]].size() == v[i]) {
                ans.push_back(mp[v[i]]);
                mp[v[i]] = {};
            }
        }
        return ans;
    }
};