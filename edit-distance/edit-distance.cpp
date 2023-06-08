class Solution {
public:
    int minDistance(string s, string t) {
         int n=s.size(), m=t.size();
        vector<int> prev(m+1,0), cur(m+1,0);
        for(int i=1; i<=m;i++) { prev[i]=i;}
        for(int j=1; j<=n; j++) cur[0]=j;

        for(int i=1; i<=n; i++)
        {
            cur[0]=i;
            for(int j=1; j<=m ;j++)
            {
                if(s[i-1]==t[j-1])
                cur[j]=prev[j-1];
                else
                    cur[j]=1+min(cur[j-1], min(prev[j], prev[j-1]));
            }
            fill(prev.begin(), prev.end(),0);
            swap(prev,cur);
        }
        return prev[m];
    }
};