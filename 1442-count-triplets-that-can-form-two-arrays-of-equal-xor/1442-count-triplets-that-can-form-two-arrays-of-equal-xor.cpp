class Solution {
public:
    int countTriplets(vector<int>& nums) {
        nums.insert(nums.begin(), 0);
        int n=nums.size(), res=0;
        for(int i=1; i<n; i++)
        {
            nums[i]^= nums[i-1];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++){
                if(nums[i]==nums[j])
                    res+= j-i-1;
            }
        }
        return res;
        
    }
};