class Solution {
int find(int x, vector<int>& parents){
    return parents[x] == x? x: find(parents[x], parents);
}
public:

    int findCircleNum(vector<vector<int>>& m) {
        if(m.empty()) return 0;
        int n=m.size();
        vector<int> leads(n,0);
        for(int i=0; i<n; i++) leads[i]=i;
        int group =n;
        for(int i=0;i<n; i++)
        {
            for(int j=0; j<n; j++){
                if(m[i][j]){
                    int lead1=find(i,leads);
                    int lead2=find(j, leads);
                    if(lead1!=lead2){
                        leads[lead1]= lead2;
                        group--;
                    }
                }
            }
        }
        return group;
    }
};