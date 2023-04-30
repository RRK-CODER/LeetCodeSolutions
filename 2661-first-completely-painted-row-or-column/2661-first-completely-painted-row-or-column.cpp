class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size(), n=mat[0].size();
        unordered_map<int, int> rowcnt, colcnt;
        unordered_map<int, pair<int,int>> map;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                map[mat[i][j]]={i,j};
        
        for(int i=0; i<arr.size(); i++)
        {
            int x=map[arr[i]].first, y=map[arr[i]].second ;
            mat[x][y] = 1;
            rowcnt[x]++;
            colcnt[y]++;
            if(rowcnt[x]==n or colcnt[y]==m) return i;
        }
        return -1;
    }
};