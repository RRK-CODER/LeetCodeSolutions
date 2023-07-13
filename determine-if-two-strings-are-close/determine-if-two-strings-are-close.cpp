class Solution {
public:
    bool closeStrings(string s, string t) {
        if(s.size()!=t.size()) return false;
        set<char> s1, s2;
        vector<int> freq1(26,0), freq2(26,0);
        for(int i=0; i<s.size(); i++){
            s1.insert(s[i]);
            s2.insert(t[i]);
            freq1[s[i] - 'a']++;
            freq2[t[i] - 'a']++;
        }
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        if(s1==s2 && freq1==freq2)
            return true;
        else
            return false;
    }
};