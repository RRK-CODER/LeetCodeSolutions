class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> res(numRows);
        int row=0, increase=-1;
        for(int i=0; i<s.size(); ++i){
            if(i%(numRows-1)==0) increase*=-1;
            res[row].push_back(s[i]);
            row+=increase;
        }
        string ret;
        for(const auto& str: res)
            ret+= str;
        return ret;
    }
};