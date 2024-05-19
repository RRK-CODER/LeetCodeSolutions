class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=10001;
        if(nums.size() == 1) return nums[0];
        
        vector<int> map(n,0);
        
        for(auto &num: nums){
            map[num]+=num;
            
        }
        int first = map[0];
        int second = max(first, map[1]);
        
        for(int i=2; i<n; i++){
            int cur = max(second, first+map[i]);
            first = second; 
            second = cur;
        }
        return max(first, second);
    }
};