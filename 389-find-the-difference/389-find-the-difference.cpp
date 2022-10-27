class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=0;
        if(t.size()<=s.size())
            return ans;
        vector<int> dict(26,0);
        
        for(int i=0; i<s.size(); i++)
        {
            dict[s[i]-'a']++;
        }
       for(int j=0; j<t.size(); j++)
       {
           dict[t[j]-'a']--;
            if(dict[t[j] - 'a'] < 0){
                ans = t[j];
                break;
       }
       }
        return ans;
    }
};