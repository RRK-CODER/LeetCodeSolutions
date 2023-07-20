class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        vector<long> ahead(2,0), cur(2,0);
        ahead[0]=ahead[1]=0;
        int n=prices.size();
        for(int ind=n-1; ind>=0; ind--){
            for(int buy=0; buy<2; buy++){
                long profit=0;
                if(buy)
                profit=max(-prices[ind]+ahead[0]-fee, ahead[1]);
                else
                profit=max(prices[ind]+ahead[1], ahead[0]);
                cur[buy]=profit;
            }
            ahead=cur;
        }
        return ahead[1];
    }
};