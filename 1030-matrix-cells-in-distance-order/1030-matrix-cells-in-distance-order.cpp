class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        
        vector<vector <int>> v;
        for(int i=0; i<rows ; i++)
        { for(int j=0; j<cols ; j++)
        { int d= abs(rCenter-i) + abs(cCenter-j) ; 
        v.push_back({d,i,j});}}
        
        sort(v.begin(), v.end());
        
        for(vector<int> &i : v) i.erase(i.begin());
        return v;
    }
};