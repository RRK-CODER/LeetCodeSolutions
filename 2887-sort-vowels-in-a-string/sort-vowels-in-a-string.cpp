class Solution {
public:
    string sortVowels(string s) {
        string t;
        for(int i=0; i<s.size(); i++)
        {
            int j=0;
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
           {
                t.push_back(s[i]);
           }
                
        }
      sort(t.begin(), t.end());
        int j=0;
        for(int i=0; i<s.size(); i++)
        {if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            s[i]=t[j];
            j++;
        }
        }
        return s;
        
    }
};