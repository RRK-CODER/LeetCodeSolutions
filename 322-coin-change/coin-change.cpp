class Solution {
public:
    int coinChange(vector<int>& coins, int tar) {
        int n=coins.size();
        vector<int> prev(tar+1, 0), cur(tar+1, 0);
        
        for(int T=0; T<=tar; T++){
            if(T%coins[0]==0) prev[T]=T/coins[0];
            else prev[T] = 1e9;
        }
        
        for(int ind =1; ind<n; ind++){
            for(int T=0; T<=tar; T++){
                int notTake = 0 + prev[T];
                int take = INT_MAX;
                if(coins[ind]<=T)
                    take = 1+ cur[T-coins[ind]];
                cur[T] = min(take, notTake);
            }
            prev = cur;
        }
      int ans=prev[tar];
        if(ans>=1e9) return -1;
        return ans;
    }
};