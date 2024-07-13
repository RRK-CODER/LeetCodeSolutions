class Solution {
public:
    int mostK(vector<int>& nums, int k){
        int i=0, res=0, n=nums.size();
        for(int j=0; j<n; j++){
            k-=nums[j]%2;
            while(k<0){
                k+=nums[i++]%2;
            }
            res+= j-i+1;
        }
        return res;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return mostK(nums, k)-mostK(nums, k-1);
    }
};