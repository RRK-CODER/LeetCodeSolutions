class Solution {
public:
    int longestCommonSubsequence(string s, string t) {
        int n=s.size(), m=t.size();
        vector<int> cur(m+1, 0), prev(m+1,0);

        for(int i=1; i<=n; ++i){
            for(int j=1; j<=m; ++j){
                if(s[i-1]==t[j-1]){
                    cur[j]=1+prev[j-1];
                }
                else{
                    cur[j]=max(cur[j-1], prev[j]);
                }
            }
            prev=cur;
        }
        return prev[m];
    }
};