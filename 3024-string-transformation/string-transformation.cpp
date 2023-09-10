class Solution {
    static std::vector<int> getNext(const std::string& s){
        int n=s.size();
        std::vector<int> lps(n,0);
        for(int i=1; i<n; ++i){
            int j=lps[i-1];
            while(j>0 && s[j]!=s[i]) j=lps[j-1];
            if(j==0 && s[0]!=s[i]) lps[i]=0;
            else lps[i] = j+1;
        }
        return lps;
    }
    static vector<int> kmp(const std::string& s, const std::string&t){
        std::vector<int> lps=getNext(t);
        int m=s.size(), n=t.size();
        int j=0;
        vector<int> res;
        for(int i=0; i<m; ++i){
            while(j>=n || (j>0 && s[i]!=t[j])) j=lps[j-1];
            if(s[i] == t[j]) j++;
            if(j==n) res.push_back(i-n+1);
        }
        return res;
    }
public:
    typedef long long ll;
    ll pow(ll a, ll b, const ll M){
        ll r=1 ,t=a;
        for(; b>0; b>>=1){
            if(b&1) r=(r*t) %M;
            t= (t*t) %M;
        }
        return r;
    }
    int numberOfWays(string s, string t, long long k) {
        long long n=s.size(), M=1e9+7;
        auto pos = Solution::kmp(s+s,t);
        if(pos.size() && pos.back() == n) pos.pop_back();
        ll f_k[2];
        f_k[1] = (pow(n-1, k , M) + (k%2*2-1) + M) % M*pow(n, M-2, M) %M;
        f_k[0] = (f_k[1] - (k%2*2 -1) + M) %M;

        ll res=0;
        for(auto p:pos) res=(res+f_k[!!p])%M;
        return res;
    }
};



































































































































































































































