class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count=0, n=s.size();
        for(int i=0 ; i<n; i++)
        {
            if(s[i]==letter)  count++;
            else continue;
        }
        return (count*100)/n;
    }
};