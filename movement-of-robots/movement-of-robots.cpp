class Solution {
public:
    int mod=1e9+7;
    int sumDistance(vector<int>& nums, string s, int d) {
       
        for(int i=0; i<nums.size(); i++)
        {
             if(s[i]=='R') nums[i]+=d;
            else nums[i]-=d;
        }
        long long ans=0, pref=0, n=s.length()-1;
        sort(nums.begin(), nums.end());
        for(long long i=0; i<nums.size(); i++){
            ans+= i*(long long) nums[i]-pref;
            ans %= mod;
            pref += nums[i];
        }
        return ans;
    }
};