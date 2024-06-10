class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp;
        for(auto i: heights)
            temp.push_back(i);
        // for(auto i: temp)
        //     cout<<i<<" ";
        //     cout<<endl;
        sort(heights.begin(), heights.end());
        int res=0;
        for(int i=0; i<heights.size(); i++)
        {
            if(heights[i]!=temp[i]) res++;
        }
        return res;
    }
};