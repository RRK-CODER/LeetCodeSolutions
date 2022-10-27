class Solution {
public:
    string freqAlphabets(string s) {
        unordered_map<int , char> map;
        string result;
        for(int i=1; i<27; i++)
        {
            map[i]=char(96+i);
        }
        string current;
        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i]!='#')
                result+=map[(s[i]-'0')];
            else{   current+=s[i-2];
            current+=s[i-1];
            i-=2;
            result+=map[stoi(current)];
            current.clear();}
             
        }
        reverse(result.begin(), result.end());
        return result;
    }
};