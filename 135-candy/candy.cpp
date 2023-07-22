class Solution {
public:
    int candy(vector<int>& rat) {
        int n=rat.size(), ans=0;
        if(n<=1) return n;
        vector<int> v(n, +1);
        for(int i=1; i<n; i++)
        {
            if(rat[i]>rat[i-1])
            v[i]=v[i-1]+1;
        }

        for(int i=n-1; i>0; i--)
        {
            if(rat[i-1] > rat[i])
                v[i-1]=max(v[i]+1, v[i-1]);
        }

        for(auto i: v)
        ans+=i;
        return ans;
    }
};