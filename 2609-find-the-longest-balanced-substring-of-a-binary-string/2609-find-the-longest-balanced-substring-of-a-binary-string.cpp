class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int maxi=0;
        for(int i=0; i<s.size();)
        {
            int zeros=0, ones=0;
            while(i<s.size() && s[i]=='0')
            {
                zeros++;
                i++;
            }

            while(i<s.size() && s[i]=='1')
            {
                ones++;
                i++;
            }   
            int len=2*min(zeros,ones);
            maxi = max(maxi,len);
             
        }
        return maxi;
    }
};