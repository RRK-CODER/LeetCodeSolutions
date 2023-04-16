class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxm=0, res=0, index;
        vector<int> v;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++)
            {
                if(mat[i][j]==1) maxm++;
               
            }
             
             if(maxm>res) index=i;
            res=max(res, maxm);
             maxm=0;
        }
                v.push_back(index);
        v.push_back(res);

        return v;
    }
};