class Solution {
public:
    int atmostK(vector<int>& nums,int k){
                int j=0, res=0;
        unordered_map <int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(!mp[nums[i]]++) k--;
            while(k<0){
                if(!--mp[nums[j]]) k++;
                j++;
                
            }
            res += i-j+1;
        }
        return res;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostK(nums, k)-atmostK(nums, k-1);
    }
};