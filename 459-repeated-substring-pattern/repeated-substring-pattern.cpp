class Solution {
public:
    bool repeatedSubstringPattern(string t) {
        int n=t.size(), j=0;
        if(n<2)
            return false;
        vector<int> lps(n);
        for(int i=1; i<n; i++)
        {
            if(t[i]==t[j])
            {
                j++;
                lps[i]=j;
            }
            else if(j)
            {
                j=lps[j-1];
                i--;
            }
        }
        return lps[n-1]!=0 && n%(n-lps[n-1])==0;
        }
};