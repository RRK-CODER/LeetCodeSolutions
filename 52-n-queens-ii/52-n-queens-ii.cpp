class Solution {
public:
    int totalNQueens(int n) {
    vector<vector<string>> res;
         vector<string> nQueens(n,string(n,'.'));
        vector<int> flag(5*n-2,1);
        solveNQueens(res, nQueens, flag, 0, n);
        return res.size();
    }
private:
void solveNQueens(vector<vector<string>>&res,vector<string>&nQueens,vector<int>&flag,int row,int &n)
    {
        if (row==n){
res.push_back(nQueens);
        return;
        }
    for(int col=0; col!=n; col++)
    {
        if(flag[col] && flag[n+row +col] && flag[4*n-2 +col -row]){
            flag[col]=flag[n+row +col]= flag[4*n-2 +col -row]=0;
            nQueens[row][col]='Q';
            solveNQueens(res,nQueens, flag, row+1, n);
            nQueens[row][col]='.';
            flag[col]=flag[n+row+col]=flag[4*n-2+col-row]=1;
        }
    }
    }
};

     
    