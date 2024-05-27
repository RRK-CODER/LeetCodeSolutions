class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int m=nums[n-1];
        for(int i=m; i>=0; i--)
        {
            int count=0;
            for(int j=0; j<n; j++){
            if(i<=nums[j]) count++;}
            
            if(count == i)
                return count;
        }
        return -1;
    }
};