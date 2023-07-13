class Solution {
public:
    int maxVowels(string s, int k) {
        int res=0, ans=0;
        unordered_set<char> bag={'a', 'e', 'i', 'o', 'u'};
        for(int i=0; i<s.size(); i++){
            res+=bag.count(s[i]);
            if(i-k>=0) res-=bag.count(s[i-k]);
            ans=max(res, ans);
        }
        return ans;

    }
};