class Solution {
int spaceoptimisation(vector<int>& prices, int n)
    {
        vector<vector<int>> after(2,vector<int>(3,0)), cur(2,vector<int>(3,0));
        for(int ind=n-1; ind>=0; ind--)
        {
            for(int buy=0; buy<=1; buy++)
            {
                for(int cap=1; cap<=2; cap++)
                {
                    if(buy==1)
                {
                    cur[buy][cap]=max(-prices[ind]+after[0][cap], 0+ after[1][cap]);
                }
                else
                {
                    cur[buy][cap]=max(prices[ind]+after[1][cap-1],0+  after[0][cap]);
                }
            }
                
         }
            after=cur;
        }
        return after[1][2];
    }
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        return spaceoptimisation(prices,n);
    }
};