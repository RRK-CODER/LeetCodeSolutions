class Solution {
public:
    int appendCharacters(string s, string t) {
    int n = 0, m = 0;
    int i = s.length(), j = t.length();
    
        while (n < i && m < j) {
            if (s[n] == t[m]) {
                m++;
            }
            n++;
        }
    
        return j - m;
    }
};