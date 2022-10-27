class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),res=0;
        vector <int> prev(256,-1);
        int i=0;
        for(int j=0; j<n; j++)
        {
i=max(i,prev[s[j]]+1);
        int maxEnd=j-i+1;
        res=max(res,maxEnd);
        prev[s[j]]=j;}
        return res;
    }
};