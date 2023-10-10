class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size(), ans=n, j=0;
        nums.erase(unique(begin(nums), end(nums)), end(nums));
        int m=nums.size();
        for(int i=0; i<m; i++){
            while(j<m && nums[j]<nums[i] +n) j++;
            ans = min(ans, n-j+i);
        }
        return ans;
    }
};