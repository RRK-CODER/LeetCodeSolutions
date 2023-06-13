class Solution {
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
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int maxArea=0, n=matrix.size(), m=matrix[0].size();
        vector<int> height(m,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == '1' ) height[j]++;
                else height[j]=0;
            }
            int area = largestRectangleArea(height);
            maxArea=max(maxArea, area);
        }
        return maxArea;
    }
};