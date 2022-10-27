class Solution {
public:
    bool isAnagram(string s, string t) {
        const int CHAR=256;
        if(s.size()!=t.size())
            return false;
        int count[CHAR]={0};
        for(int i=0; i<s.size(); i++)
        {
            count[s[i]]++;
            count[t[i]]--;
        }
        for(int i=0; i<CHAR; i++)
        { if(count[i]!=0)
                return false ; }
            return true;
    }
};