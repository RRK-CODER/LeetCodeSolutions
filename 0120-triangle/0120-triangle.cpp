class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        int m=tri.size();
        vector<int> front(m, 0), cur(m, 0);
        for(int i=0; i<m; i++)
            front[i] = tri[m-1][i];
        for(int i=m-2; i>=0; i--){
            for(int j=i; j>=0; j--){
                int d= tri[i][j] + front[j];
                int df = tri[i][j] + front[j+1];
                cur[j]= min(d,df);
            }
            front = cur;
        }
        return front[0];
    }
};