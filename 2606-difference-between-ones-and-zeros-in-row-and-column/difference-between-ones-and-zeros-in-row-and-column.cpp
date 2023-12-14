class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& mat) {
            vector<int> rowsone(mat.size()), colsone(mat[0].size());
            vector<int> rowszero(mat.size()), colszero(mat[0].size());
            for (int i = 0; i < rowsone.size(); ++i){
                for (int j = 0; j < colsone.size(); ++j) {
                    if(mat[i][j])
                        ++rowsone[i], ++colsone[j];
                    else if(mat[i][j]==0)
                        ++rowszero[i], ++colszero[j];
                }
            }

            for (int i = 0; i < rowszero.size(); ++i){
                for (int j = 0; j < colszero.size(); ++j) {
                  mat[i][j] =rowsone[i]+colsone[j]-rowszero[i]-colszero[j]; 
                }
            }
        return mat;
    }
};