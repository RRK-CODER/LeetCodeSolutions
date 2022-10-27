class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> v;
        for(int l=0,h=s.size(), i=0;i<=s.size();i++)
            v.push_back(i==s.size() || s[i]=='I' ? l++: h--);
      return v;
    }
};