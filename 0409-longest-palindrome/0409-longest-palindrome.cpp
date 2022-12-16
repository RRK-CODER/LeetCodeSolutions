class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int count=0;
        for(int i=0; i<s.size(); i++)
            mp[s[i]]++;
        for(auto i: mp)
        {
                  if(i.second%2!=0)
                      count++;
        }
        if(count>1) return s.size()+1-count;
        
        return s.size();
    }
};