class Solution {
    int solve(vector<string> &words, unordered_map<char,int> &mp, vector<int> &score, int i, int n)
    {
        if(i==n) return 0;
        int a =0, b=0;
        unordered_map<char, int> ch = mp;
        int brk=0, temp =0;
        string s= words[i];
        for(int j=0; j<s.size(); j++)
        {
            ch[s[j]]--;
            if(ch[s[j]] < 0)
            {
                brk =1;
                break;
            }
            temp += score[s[j] - 'a'];
        }
        if(brk == 0)
            a=temp + solve(words, ch, score, i+1, n);
        b = solve(words, mp, score, i+1, n);
        
        return max(a,b);
        
    }
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map<char, int> mp;
        int n=words.size();
        for(auto i: letters)
            mp[i]++;
        for(auto i: mp)
            cout<<i.first<<" "<<i.second<<" ";
        cout<<endl;
        
        return solve(words, mp , score, 0, n);
    }
};