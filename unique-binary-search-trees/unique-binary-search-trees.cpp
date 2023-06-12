class Solution {
    vector<int> dp;
        int f(int n) {
        if(n<=1) return 1;
        if(dp[n]!=-1) return dp[n];
        int ans=0;
        for(int i=1; i<=n; i++){
            int left = f(i-1);
            int right = f(n-i);
            ans+=left*right; 
        }
        return dp[n]=ans;
    }
public:
    int numTrees(int n) {
        dp=vector<int> (n+1, -1);
        return f(n);
    }
};