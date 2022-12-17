class Solution {
public:
    string minWindow(string s, string p) {
        int n1 = s.size();
        int n2 = p.size();
        if(n2>n1)return "";
        
        int mini = INT_MAX;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        int count = 0,start =0, ans=0;
        for(int i=0; i<n2; i++) m2[p[i]]++;
        
        for(int i=0; i<n1; i++){
            m1[s[i]]++;
            if(m2[s[i]] >= m1[s[i]])count++;
            
            if(count == n2){
                //release
                while(count == n2){
                    if(mini > (i-start+1) ){
                        mini = i+1-start;
                        ans = start;
                    }
                    m1[s[start]]--;
                    if(m2[s[start]] > m1[s[start]]) count--;
                    start++;
                }
            }
        }
        if(mini == INT_MAX)return "";
        else return s.substr(ans,mini);
    }
    
};