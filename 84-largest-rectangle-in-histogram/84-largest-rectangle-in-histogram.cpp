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
};