class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<int,char> mp1;
        
        int countA=0, countB=0;
        for(int i=0; i<secret.size(); i++)
        {
             if(secret[i]==guess[i]) countA++;
            
            else
                mp1[secret[i]]++;
            
        }
        
        for(int i=0; i<secret.size(); i++)
        {
            if(secret[i]!=guess[i])
            {
                if(mp1[guess[i]]>0)
                    countB++;
                 mp1[guess[i]]--;
            }
        }
        string ans= to_string(countA)+"A"+to_string(countB)+"B";
        return ans;
    }
};