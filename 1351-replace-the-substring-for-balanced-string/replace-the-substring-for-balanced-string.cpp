class Solution {
public:
    int balancedString(string s) {
        unordered_map<int, int> mp;
        int n=s.length(), res=n, j=0, k=n/4;
        
        for(auto i: s)
            mp[i]++;
        
        for(int i=0;i<n; i++){
            mp[s[i]]--;
            while(j<n && mp['Q']<=k && mp['W']<=k && mp['E']<=k && mp['R']<=k){
                res=min(res, i-j+1);
                mp[s[j++]]+=1;
            }
            
        }
        return res;
    }
};