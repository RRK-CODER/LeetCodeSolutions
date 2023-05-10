class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int i=0, j=0, di=0, dj=1;
        for(int k=1; k<=n*n; k++){
            matrix[i][j]=k;
            if(matrix[(i+di+n)%n] [(j+dj+n)%n]!=0){
                int temp=di;
                di=dj;
                dj=-temp;
                
            }
            i+=di;
            j+=dj;
            
        }
        return matrix;
    }
};