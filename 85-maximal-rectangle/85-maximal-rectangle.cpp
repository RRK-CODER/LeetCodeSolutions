class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        stack <int> s;
        int res=0,tp,curr,n=arr.size();
        for(int i=0; i<n; i++)
        {
        while(!s.empty() && arr[s.top()]>=arr[i])
        {
             tp=s.top();
            s.pop();
             curr=arr[tp]*(s.empty()?i:(i-s.top()-1));
            res=max(curr,res);
        }
            s.push(i);
        }
        while(!s.empty())
        {
             tp=s.top();
            s.pop();
             curr=arr[tp]*(s.empty()?n:(n-s.top()-1));
        res=max(curr,res);
        }
        return res;
    }
    int maximalRectangle(vector<vector<char>>& arr) {
        if(arr.empty())return 0;
        int maxRec=0;
        vector<int> height(arr[0].size(),0);
        
        for(int i=0; i<arr.size();i++)
        {
            for(int j=0; j<arr[0].size(); j++)
            {
                if(arr[i][j]=='0')
                    height[j]=0;
                else 
                    height[j]++;
            }
            maxRec=max(maxRec,largestRectangleArea(height));
        }
        return maxRec;
    }
};