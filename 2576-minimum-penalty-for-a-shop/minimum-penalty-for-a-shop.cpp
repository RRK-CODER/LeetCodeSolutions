class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int> prefix;
        vector<int> suffix;
        prefix.push_back(0);
        suffix.push_back(0);
        int count=0;
        for(int i=0; i<n; i++)
            {
                if(customers[i]=='N')
                      count++;
                      prefix.push_back(count);
            }
        count=0;

        for(int i=n-1; i>=0; i--)
            {
                if(customers[i]=='Y')
                      count++;
                      suffix.push_back(count);
            }
        reverse(suffix.begin(), suffix.end());
        int ans=1e9+7, ind=0;
        for(int i=0; i<n+1; i++)
            {
                int res=suffix[i]+prefix[i];
                if(res<ans){
                    ans=res;
                    ind=i;
                }
            }
        return ind;
    }
};