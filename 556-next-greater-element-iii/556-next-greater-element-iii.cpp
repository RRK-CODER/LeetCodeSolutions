class Solution {
public:
    int nextGreaterElement(int n) {
  string temp=to_string(n);
        stack <int> stk;
        int prev=0;
        for(int i=temp.size()-1; i>=0; i--)
        {
            if(!stk.empty() && temp[i]<temp[stk.top()]){
                while(!stk.empty() && temp[i]<temp[stk.top()]){
                    prev=stk.top();
                    stk.pop();
                }
                swap(temp[i],temp[prev]);
                reverse(temp.begin()+i+1,temp.end());
                break;
            }
            stk.push(i);
        }
        long long res=stoll(temp);
        return (res>INT_MAX || (int)res==n)?-1:(int)res;
    }
};
