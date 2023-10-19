class Solution {
public:
    bool backspaceCompare(string s, string t) {
     string s1, s2;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='#' && s1.size()!=0)
                s1.pop_back();
            else if(s[i]!='#')
                s1.push_back(s[i]);
        }
          for(int i=0; i<t.size(); i++)
        {
            if(t[i]=='#' && s2.size()!=0)
                s2.pop_back();
            else if(t[i]!='#')
                s2.push_back(t[i]);
        }
        if(s1.size()!=s2.size()) return false;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]!=s2[i]) return false;
        }
        return true;
    }
};