class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0, e = nums.size()-1;
        int mid;
        int l=0,r=0;
        if(nums.size()==0)  //if the size of the nums is 0 , then {-1,-1}
            return vector<int>{-1,-1};
        while(e>=s){   //binary search for finding target
            mid = s + (e-s)/2;
            if(nums[mid]<target) 
                s = mid+1;
            else if(nums[mid]>target)
                e = mid-1;
            else{
                l=mid;
                r=mid;
                while(nums[l]==target){ //l is for left numbers which are target
                    l=l-1;
                    if(l==-1)
                        break;
                }
                while(nums[r]==target){  //r  is for right numbers which are target
                    r=r+1;
                    if(r==nums.size())
                        break;
                }
                return vector<int>{l+1,r-1}; //return leftmost and rightmost indexes of the target
            }
        }
        return vector<int>{-1,-1}; //if target is not in the array
    }
};