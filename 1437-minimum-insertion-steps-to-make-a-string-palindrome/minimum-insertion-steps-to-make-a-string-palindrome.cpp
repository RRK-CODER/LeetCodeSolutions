class Solution {
public:
    int lcs(string s, string t)
    {
        int n=s.size(), m=t.size();
        vector<int>prev(m+1, 0), cur(m+1, 0);
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(s[i-1]==t[j-1])
                    cur[j]= 1+ prev[j-1];
                else 
                    cur[j]= max(cur[j-1],prev[j] );
            }
            prev=cur;
        }
        return prev[m];
    }
    
    int lps(string s)
    {
        string t= s;
        reverse(t.begin(), t.end());
        return lcs(s, t);
    }
    int minInsertions(string s) {
        int n=s.size();
        return n- lps(s);
    }
};