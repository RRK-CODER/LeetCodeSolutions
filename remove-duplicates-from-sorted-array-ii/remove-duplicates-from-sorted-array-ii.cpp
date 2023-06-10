class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> m;
        for(int i=0; i<nums.size(); i++)
        {
           if(m[nums[i]]==2)
           {
               nums.erase(nums.begin()+i);
               i--;
           }
           else{
               m[nums[i]]++;
           }
        }
        return nums.size();
    }
};