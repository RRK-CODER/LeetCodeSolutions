class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size(), res;
        for(int i=n-1; i>=0; i--)
        {
            string a;
            a = num[i];
            int temp=stoi(a);
            if(temp%2!=0)
            {
                res=i;
                break;
            }
        }
        string ans;
        for(int i=0; i<=res; i++)
            ans+=num[i];
        return ans;
    }
};