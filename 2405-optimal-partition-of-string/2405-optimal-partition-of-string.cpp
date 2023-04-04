class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,bool> mp;
        int idx=0, count=0;
        while(idx<s.length())
        {
            if(mp.find(s[idx])!=mp.end()){
                count++;
                mp.clear();
            }
            mp[s[idx]]= true;
            idx++;
        }
        return count+1;
    }
};