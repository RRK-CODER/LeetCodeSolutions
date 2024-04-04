class Solution {
public:
    int maxDepth(string s) {
        int res=0, temp=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
                temp++;
                res=max(res, temp);
            if(s[i]==')')
                temp--;
        }
        return res;
    }
};