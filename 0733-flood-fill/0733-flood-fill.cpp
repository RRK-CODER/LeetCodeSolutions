class Solution {
public:
    void dfs(vector<vector<int>>& image, int i , int j , int val, int newcolor)
    {
        if(i<0 || i>=image.size() || j<0 || j>=image[0].size() || image[i][j]==newcolor || image[i][j]!= val)
            return ;
        
        image[i][j]=newcolor;
        dfs(image,i-1,j,val,newcolor);
        dfs(image,i+1,j,val,newcolor);
        dfs(image,i,j-1,val,newcolor);
        dfs(image,i,j+1,val,newcolor);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int val=image[sr][sc];
        dfs(image,sr,sc,val, newcolor);
        return image;
    }
};