class Solution {
public:
    int removeBoxes(vector<int>& boxes) {
        int n=boxes.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>> (n+1, vector<int> (2,0)));
        for(int m=1; m<=n; m++){
            for(int i=0, j=m-1; i+m<=n; i++, j++){
                dp[i][j] = vector<int> (2,1);
                if(i==j) continue;

                for(int k=i; k<j; k++){
                    if(boxes[k] == boxes[j]){
                        int tmp = dp[i][k][0] + dp[k+1][j-1][0] + 2* dp[i][k][1] + 1;
                        if(tmp > dp[i][j][0]){
                            dp[i][j] = vector<int>({tmp, dp[i][k][1]+1});
                        }
                    }
                    else{
                        if(dp[i][j][0] < dp[i][k][0] + dp[k+1][j][0]){
                            dp[i][j] = vector<int>({dp[i][k][0] + dp[k+1][j][0], dp[k+1][j][1]});
                        }
                    }
                }
                int pre=i, cnt=0, cur=0;
                for(int k=i; k<=j; k++){
                    if(boxes[k] == boxes[j]){
                cur=cur+(k>0 ? dp[pre][k-1][0]: 0);
                    cnt += 1; 
                    pre = k+1;
                    }

                }
                       cur = cur+(cnt? pow(cnt,2):0);
                      if(dp[i][j][0] <= cur){
                dp[i][j] = vector<int> ({cur, max(dp[i][j][1], cnt)});
            }
            }
         
      
        }
        return dp[0][n-1][0];
    }
};