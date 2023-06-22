class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int ans=0;
        for(auto it: nums) mp[it]++;
        for(auto it=mp.begin(); it!=mp.end(); ++it)
        {
            int num=it->first, count=it->second;
            if(k-num==num) ans+=count/2;
            else if(mp.count(k-num)){
                int minm=min(count, mp[k-num]);
                ans += minm;
                mp[num] -= minm;
                mp[k-num] -= minm;

            }
           
        }
        return ans;
    }
};