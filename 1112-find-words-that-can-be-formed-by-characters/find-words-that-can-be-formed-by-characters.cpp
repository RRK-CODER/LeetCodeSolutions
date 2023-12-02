class Solution {
public:
    int countCharacters(vector<string>& w, string chars) {
        unordered_map<char, int> mp1,mp2;
        int res=0;
        for(auto i: chars)
            mp1[i]++;
        
        for(int i=0; i<w.size(); i++)
        {
            mp2=mp1;
            bool ok = 1;
            for(int j=0; j<w[i].size(); j++)
            {
                mp2[w[i][j]]--;
                if(mp2[w[i][j]]<0)
                {
                    ok=0;
                    break;
                }
            }
            if(ok)
                res+=w[i].size();
        }
        return res;

    }
};