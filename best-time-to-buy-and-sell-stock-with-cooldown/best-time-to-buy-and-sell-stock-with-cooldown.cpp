class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> front2(2,0), front1(2,0), cur(2,0);
        for(int ind=n-1; ind>=0; ind--){
            cur[1]=max(-prices[ind]+front1[0], 0+front1[1]);
            cur[0]=max(prices[ind]+front2[1], 0+front1[0]);
            front2=front1;
            front1=cur;
        }
        return cur[1];
    }
};