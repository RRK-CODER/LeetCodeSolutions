class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
int ans = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int cnt = 0;
            if(nums[i]%2 == 0){
                int j;
                for(j=i+1; j<n; j++){
                    if((nums[j-1]%2 != nums[j]%2) && (nums[j-1] <= threshold)){
                        cnt++;
                    }else{
                        break;
                    }
                }
                if(nums[j-1]<=threshold){
                    cnt++;
                }
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};