class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long unique=0, ans=0, sum=0;
        unordered_map<int, int> mp;
        for(int f=0, b=0; f<nums.size();++f){
            sum += nums[f];
            mp[nums[f]]++;
            if(mp[nums[f]] == 1) unique++;
            if(f>=k){
                sum -= nums[b];
                mp[nums[b]]--;
                if(mp[nums[b]] == 0) unique--;
                b++;
            }
            if(unique>=m) ans = max(ans, sum);
        }
        return ans;
    }
};