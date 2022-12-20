class Solution {
public:

class DSU{
    public:
    vector<int> parent ,rank;
     int count;

DSU(vector<vector<char>> grid){
    count=0;
    int m=grid.size(), n=grid[0].size();

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j]=='1') count++;
        parent.push_back(i*n+j);
        rank.push_back(0);
         }
        
    }
}

int find(int x){
    if(x!=parent[x])
    parent[x]=find(parent[x]);
    return parent[x];
}

void Union(int x,int y)
{
    int xp=find(x);
    int yp=find(y);
    if(xp!=yp){
        if(rank[xp]>rank[yp]) parent[yp]=xp;
        else if(rank[xp]<rank[yp]) parent[xp]=yp;
        else{
            parent[yp]=xp;
            rank[xp]++;
        }
        count--;
    }
}
int getCount() { return count;}
  
};
int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0 || grid[0].size()==0) return 0;
        int m=grid.size();
        int n=grid[0].size();

        DSU uf(grid);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1')
                {
                    grid[i][j]='0';
                     if(i-1 >=0 && grid[i-1][j] == '1')
                        uf.Union(i*n + j, (i-1)*n + j);
                    if(i+1 <m  && grid[i+1][j] == '1')
                        uf.Union(i*n + j, (i+1)*n + j);
                    if(j-1 >=0 && grid[i][j-1] == '1')
                        uf.Union(i*n + j, i*n + j-1);
                    if(j+1 <n  && grid[i][j+1] == '1')
                        uf.Union(i*n + j, i*n + j+1);       
                }
            }
        }
        return uf.getCount();
    }
};