class Solution {
public:
    int addMinimum(string word) {
       stack<char> st;
        for(int i=0; i<word.size(); i++)
        {
            char c = word[i];
            st.push(c);
        }
        int count=0;
        while(!st.empty())
        {
            if(!st.empty() && st.top() == 'c')
                st.pop();
            else 
                count++;
            if(!st.empty() && st.top() == 'b')
                st.pop();
            else 
                count++;
            if(!st.empty() && st.top() == 'a')
                st.pop();
            else 
                count++;
            
        }
        return count;
    }
};