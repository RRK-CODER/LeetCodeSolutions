class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int extra) {
        int maxm=0, count=0, res=0;
        for(auto i: c)
        maxm=max(maxm, i);
        vector<bool> arr;
        
        for(int i=0; i<c.size(); i++)
        {
            res = c[i] + extra;
            if(maxm<=res)
                arr.push_back(true);
            else 
                arr.push_back(false);
        }
        return arr;
    }
};