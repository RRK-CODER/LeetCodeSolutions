class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
              
        vector<vector<int>> res;
        unordered_map<int,int> umap;
        for(int i=0; i<nums.size(); i++)
            umap[nums[i]]++;
            int maxl=0, maxtime=0;
        for(auto i:umap)
        {
            if(i.second>maxtime){
                maxl = i.first;
                maxtime = i.second;
            }
        }
        while(umap[maxl]>0){
            vector<int> temp;
            for(auto i:umap){
                if(i.second)
                {
                    temp.push_back(i.first);
                    umap[i.first]--;
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};