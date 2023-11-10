class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adj) {
        vector<int> ans;
        unordered_map<int, vector<int>> mp;
        for(auto &i: adj)
        {
            mp[i[0]].push_back(i[1]);
            mp[i[1]].push_back(i[0]);
        }

        for(auto &i: mp)
        {
            if(i.second.size() == 1)
                {ans.push_back(i.first);
                ans.push_back(i.second[0]);
                break;}
        }
while (ans.size() < adj.size() + 1) {
        auto tail = ans.back(), prev = ans[ans.size() - 2];
        auto &next = mp[tail];
        if (next[0] != prev)
            ans.push_back(next[0]);
        else
            ans.push_back(next[1]);
    }
    return ans;
    }
};