class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), mini = prices[0], maxProfit=0;
        for(int i=1; i<n; i++)
        {
            int cost = prices[i]-mini;
            maxProfit=max(maxProfit, cost);
            mini = min(mini, prices[i]);
        }
        return maxProfit;
    }
};