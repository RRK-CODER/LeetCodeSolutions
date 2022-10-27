class Solution {
public:
    bool check(string &s1 , string &s2){
        if(s1.size()!= s2.size()+1) return false;
        int first=0, second =0;

    while(first<s1.size())
    {
        if(s1[first]==s2[second]){   
            first++;
        second++;}
        else
            first++;
    }
        if(first==s1.size()  && second==s2.size()) return true;
        return false;
            }
    
       static bool compare(const string &s1, const string &s2) {
        return s1.length() < s2.length();
    }

    int longestStrChain(vector<string>& words) {
        vector<int> dp(words.size(),1);
        sort(words.begin(), words.end(), compare);
        int maxi=1;
      for(int i=1; i<words.size(); i++)
      {
          for(int j=0; j<i; j++)
          {
              if(check(words[i],words[j]) && 1+ dp[j]>dp[i])
              {
                  dp[i]=1+dp[j];
              }
              if(dp[i]>maxi)
                  maxi=dp[i];
          }
      }
        return maxi;
    }
    
};