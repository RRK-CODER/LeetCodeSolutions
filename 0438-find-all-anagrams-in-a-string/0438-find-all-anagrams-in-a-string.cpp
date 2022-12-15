class Solution {
    private:
    const long long q=30011; //prime number greater than maximum frequency of a character
    const long long mod=1000000007;
    // Convert the frequency vector into a number of base q
    // f[0]*q^25 + f[1]*q^24 + f[2]*q^23 + .... + f[25]*q^0
    long long find_hash(vector<int> &freq)
    {
         long long ans=0;
        for(long long i=25; i>=0; i--){
            ans=((ans*q)+freq[i])%mod;
            
        }
        return ans;
    }
    
    long long pow_q(int k){
        long long pow_q=1;
        for(int i=1; i<=k; i++){
            pow_q=(pow_q*q)%mod;
        }
        return pow_q;
    }
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n=s.size(), m=p.size();
        if(n<m) return ans;
        
        //frequency of charecters in text
        vector<int> freqs(26);
        for(int i=0; i<m; i++)
            freqs[s[i]-'a']++;
        //frequency of charecters in patern
        vector<int> freqp(26);
        for(int i=0;i<m; i++)
            freqp[p[i]-'a']++;
        
        long long text_hash=find_hash(freqs);
        long long pat_hash=find_hash(freqp);
        
        if(text_hash==pat_hash) ans.push_back(0);
        
        for(int i=1; i+m-1<n; i++){
            // frequency of character s[i-1] decreases by 1 so we subtract q^(s[i-1]-'a')
            text_hash=(text_hash -pow_q(s[i-1]-'a')+mod)%mod;
            // frequency of character s[i+m-1] increases by 1 so we add q^(s[i+m-1]-'a')
            text_hash=(text_hash +pow_q(s[i+m-1]-'a'))%mod;
             if(text_hash==pat_hash){
                 ans.push_back(i);
             }
            
        }
        return ans;
    }
};