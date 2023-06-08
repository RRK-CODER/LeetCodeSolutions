class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size(), m=word2.size();
        vector<int> prev(m+1,0), cur(m+1,0);
        for(int j=0; j<m; j++) prev[j]=0;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m ;j++)
            {
                if(word1[i-1]==word2[j-1])
                cur[j]=1+prev[j-1];
                else
                    cur[j]=max(cur[j-1], prev[j]);

            }
            prev=cur;
        }
        int val = prev[m], ans;
        ans=word1.size()-val+word2.size()-val;

        return ans;

    }
};