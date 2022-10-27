DP with TLE
```
class Solution {
public:
int sum(vector<int>& w,int b,int d)
{
long long int s=0;
for(int i=b; i<=d ; i++)
{
s+=w[i];
}
return s;
}
int shipWithinDays(vector<int>& w, int d) {
int n=w.size();
int dp[d+1][n+1];
for(int i=1; i<=n; i++)
{
dp[1][i]=sum(w,0,i-1);
}
for(int i=1; i<=d; i++)
{
dp[i][1]=w[0];
}
for(int i=2; i<=d ; i++)
{
for(int j=2; j<=n; j++){
int res=INT_MAX;
for(int p=1; p<j; p++){
res=min(res,max(dp[i-1][p],sum(w,p,j-1)));
}
dp[i][j]=res;
}
}
return dp[d][n];
}
};
```
​