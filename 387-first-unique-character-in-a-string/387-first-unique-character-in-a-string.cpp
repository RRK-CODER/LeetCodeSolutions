class Solution {
public:
    int firstUniqChar(string s) {
        const int CHAR=256;
        int fi[CHAR];
        fill(fi, fi+CHAR ,-1);
        for(int i=0; i< s.length(); i++)
        {
            if(fi[s[i]]==-1)
                fi[s[i]]=i;
            else
                fi[s[i]]=-2;
        }
        int res=INT_MAX;
        for(int i=0; i<CHAR; i++)
        {
        if(fi[i]>=0)
            res=min(res,fi[i]);
        }
        return (res==INT_MAX)?-1:res;
    }
};