class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cooldown, selling, buying;
        cooldown=0;
        selling=0;
        buying=-prices[0];
        for(const int &i: prices)
        {
           int prev=selling;
            selling=buying+i;
            buying=max(buying, cooldown-i);
            cooldown=max(cooldown, prev);
        }
        return max(selling , cooldown);
    }
};