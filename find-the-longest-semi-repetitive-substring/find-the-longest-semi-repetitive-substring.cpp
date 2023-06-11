class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int i=0, j=1, ans=1, last=0;
        while(j<s.size())
        {
           if(s[j] == s[j-1]){
               if(last) i=last;
               last=j;
           }
           ans=max(ans, j-i+1);
           j++;
        }
        return ans;
    }
};