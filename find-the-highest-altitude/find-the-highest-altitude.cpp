class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0;
        if(gain[0]>0) ans=gain[0];
        for(int i=1; i<gain.size(); i++)
        {
            gain[i]+= gain[i-1];
            ans=max(gain[i], ans);
        }
        return ans;
    }
};