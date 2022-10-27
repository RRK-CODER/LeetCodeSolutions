class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int count1=0;
        for(int i=0; i<accounts.size();i++)
        {
            int count=0;
            for(int j = 0;j<accounts[i].size();j++){
            count+=accounts[i][j];
        }
            count1=max(count1,count);
        }
        return count1;
    }
};