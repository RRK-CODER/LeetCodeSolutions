class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j=0;
        for(int i: pushed)
        {
            st.push(i);
            while(st.size() && st.top()==popped[j]){
                st.pop();
                j++;
            }
                
        }
        return st.size()==0;
    }
};