class Solution {
public:
    bool buddyStrings(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int> mp;

        if(s==t){
            for(auto it: s)
                {mp[it]++;
            if(mp[it]>1)
                return true;}
            return false;
        }

        vector<int> diff;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=t[i])
            {
                diff.push_back(i);
                if(diff.size()>2)
                    return false;
            }
        }
            if(diff.size()!=2) 
             return false;
            if((s[diff[0]] == t[diff[1]]) && (s[diff[1]] == t[diff[0]])) return true;
            return false;
    }
};