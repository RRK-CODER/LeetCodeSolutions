class Solution {
static bool sortcol( const vector<int>& v1, const vector<int>& v2) {
    return v1[1] < v2[1];}
public:

    int findLongestChain(vector<vector<int>>& vect) {
        sort (vect.begin(), vect.end(), sortcol );
        int count=0;
        for(int i=0, j=0; j<vect.size(); j++)
        {
            if(j==0 || vect[j][0] > vect[i][1])
            {
                i=j;
                count++;
            }
        }
        return count;
    }
};