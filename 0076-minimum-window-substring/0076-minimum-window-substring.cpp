class Solution {
public:
    string minWindow(string s, string t) {
        string result;
        if(s.empty() || t.empty()) return result;
        
        unordered_map<char,int> map;
        unordered_map<char,int> window;
        for(int i=0; i<t.length(); i++) map[t[i]]++;
        
        int minLength=INT_MAX;
        int letterCounter=0;
        for(int slow=0, fast=0; fast<s.length(); fast++)
        {
            char c=s[fast];
            if(map.find(c)!=map.end())
            {
                    window[c]++;
            if(window[c]<=map[c])
            {
                letterCounter++;
            }
                
            }
            
        
        if(letterCounter>=t.length())
        {
            while(map.find(s[slow])==map.end() || window[s[slow]]>map[s[slow]])
            {
                window[s[slow]]--;
                slow++;
            }
            if(fast-slow+1<minLength)
            {
                minLength=fast-slow+1;
                result=s.substr(slow,minLength);
            }
            }
        }
        return result;
    }
};