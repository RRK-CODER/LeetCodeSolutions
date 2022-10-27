class Solution {
public:
      int memo[1001];
    int minCost(vector<int>& cost , int n)
    {            
 if(n<0)return 0;
        else if(memo[n]!=-1)return memo[n];
else if(n==0 || n==1)return cost[n];
        else
            return memo[n]=min(cost[n]+minCost(cost,n-1),cost[n]+minCost(cost,n-2));
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
         memset(memo,-1,sizeof(memo));
        return min(minCost(cost,n-1),minCost(cost,n-2));
        }
};