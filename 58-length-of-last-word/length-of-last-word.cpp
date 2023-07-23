class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans;
        vector<string> res;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' ')
            {
                if(ans.size()!=0)
                res.push_back(ans);
                ans.clear();
            }
            else
                ans+=s[i];
        }
        if(ans.size()!=0)
        res.push_back(ans);
        string tmp=res[res.size()-1];
        return tmp.size();
    }
};