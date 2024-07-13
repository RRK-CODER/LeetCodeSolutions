class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int j=0, n= nums.size(), res=n+1;
        for(int i=0; i<n; i++){
            k-=nums[i];
            while(k<=0)
                {
                res =min(res, i-j+1);
                k+= nums[j++];
                }
            }
        return res%(n+1);
    }
};