class Solution {
public:
       bool isAllStars(string &s, int i){
        for(int j=1; j<=i; j++){
            if(s[j-1] != '*')
                return false;
        }
        return true;
    }
    bool isMatch(string p, string s) {
        int n=s.size(), m=p.size();
        vector<bool> prev(m+1, false), cur(m+1, false);
        prev[0]=true;

        for(int i=1; i<=n; i++){
            cur[0] = isAllStars(s,i);
            for(int j=1; j<=m; j++){
                if(s[i-1]==p[j-1] || s[i-1]=='?')
                    cur[j]=prev[j-1];
                else
                {
                    if(s[i-1] == '*') 
                        cur[j] = prev[j] || cur[j-1];
                    else
                        cur[j]=false; 
                }
            }
            prev=cur;
        }
        return prev[m];
    }
};