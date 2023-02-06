class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> nums2;
        int i=0, j=n;
        while(i<n && j<(2*n))
        {
            nums2.push_back(nums[i]);
            i++;
            nums2.push_back(nums[j]);
            j++;
        }
        return nums2;
    }
};