class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> mp;
        for(int i=0; i<edges.size(); i++)
        {
            mp[edges[i][1]]++;
            mp[edges[i][0]]++;
        }
        int temp=0;
        for(auto i: mp)
        {
            int freq=1;
            
            if(i.second>freq)
            {
                freq=i.second;
                temp=max(i.first, temp);
            }
        }
        return  temp;
    }
};