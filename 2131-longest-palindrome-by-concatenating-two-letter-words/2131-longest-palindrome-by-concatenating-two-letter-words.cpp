class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        int count=0;
        for(string word:words)
            mp[word]++;
        bool flag=false;
        for(string word:words)
        {
            if(mp[word])
            {
                string t="";
                t+=word[1];
                t+=word[0];
                if(t==word)
                    count+=mp[t]/2;
                else count+=min(mp[t],mp[word]);
                if(mp[t]%2==1 && t[0]==t[1])
                    flag=true;
                mp[word]=0;
                mp[t]=0;
            }
        }
        count*=4;
        if(flag) count+=2;
        return count;
    }
};