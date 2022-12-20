class Solution {
    int ft[3001]={1}, im[3001]={1}, mod=10e8+7;
public:
    int modPow(int x, unsigned int y, unsigned int m)
    {
        if(y==0) return 1;
        long p=modPow(x,y/2,m)%m;
        p=(p*p)%m;
        return y%2 ?(p*x)%m:p;
    }
    int makeStringSorted(string s) {
        long sz=s.size(), res=1, cnt[26]={};
        if(ft[1]==0)
            for(long i=1; i<=3000; i++)
            {
                ft[i]=i*ft[i-1]%mod;
                im[i]=modPow(ft[i], mod-2, mod);
            }
        for(int i=sz-1; i>=0; i--)
        {
            cnt[s[i]-'a']+=1;
            auto prems=accumulate(begin(cnt), begin(cnt)+s[i]-'a',0l) *ft[sz-i-1]%mod;
            for(int n: cnt)
                prems=prems*im[n]%mod;
            res=(res+prems)%mod;
        }
        return res-1;
    }
};