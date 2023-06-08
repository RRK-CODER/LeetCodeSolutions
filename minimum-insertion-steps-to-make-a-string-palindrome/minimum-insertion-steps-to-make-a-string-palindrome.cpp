class Solution {
   int lcs(string text1, string text2) {
        int m= text1.length(), n= text2.length();
vector<int> cur(m+1,0), prev(n+1,0);
        for(int i=1; i<= m; i++)
        {
            for(int j=1; j<= n ; j++)
            {
                if(text1[i-1]== text2[j-1])
                    cur[j]= 1 + prev[j-1];
                else
                {
                    cur[j]=max(prev[j], cur[j-1]);
                }
                    
            }
            prev=cur;
        }
        return cur[n];
    }
    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(t.begin(), t.end());
        return lcs(s, t);
    }
public:
    int minInsertions(string s) {
        return s.size()-longestPalindromeSubseq(s);
        
    }
};