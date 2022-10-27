     class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(nums.empty())
            return false;
        int low= 0;
        int high= nums.size()-1;
        int mid=0;
        while(low <= high)
        {
           
            mid = low + (high - low) /2;
            if(nums[mid]== target)
                return true;
           // if(nums[high]==target)
             //  return t=true;
             
             if(nums[mid] > nums[low] )
            {
           
                if(nums[mid]> target && nums[low] <= target)
                {
                    high= mid -1;
                }
                else
                { low = mid+1 ;}
                
            }
               else if (nums[low] == nums[mid]) {
                low++;
             }
            else
            {
                if(nums[mid]< target && nums[high]>= target)
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                                    }
               
            }
            
          
         
        }
        return false;
        
    }
};   
