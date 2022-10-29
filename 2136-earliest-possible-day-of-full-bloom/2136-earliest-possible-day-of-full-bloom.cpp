class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int res=0;
        vector<pair<int,int>> v;
        for(int i=0; i<plantTime.size(); i++)
            v.push_back(make_pair(growTime[i],plantTime[i]));
        sort(v.rbegin(),v.rend());
        for(int i=1; i<plantTime.size(); i++)
            v[i].second+=v[i-1].second;
        res=v[v.size()-1].second;
        for(int i=0; i<growTime.size(); i++)
        {
            if(v[i].first+v[i].second>res)
                res=max(res,v[i].first+v[i].second);
        }
        return res;
    }
};