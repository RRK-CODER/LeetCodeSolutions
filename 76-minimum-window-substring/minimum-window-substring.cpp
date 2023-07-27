class Solution {
public:
    string minWindow(string s, string p) {
        int n1=s.size(), n2=p.size(), mini=INT_MAX;
        if(n2>n1) return "";
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        int count=0, start=0, ans=0;
        for(char i: p)
            m2[i]++;
        
        for(int i=0; i<n1; i++){
            m1[s[i]]++;
            if(m2[s[i]]>= m1[s[i]]) count++;
            if(count==n2){
                while(count==n2){
                    if(mini>(i-start+1)){
                        mini=i+1-start;
                        ans=start;
                    }
                    m1[s[start]]--;
                    if(m2[s[start]] >m1[s[start]])  
                        count--;
                    start++;
                }
            }
        }
        return mini==INT_MAX?"": s.substr(ans, mini);
    }
};