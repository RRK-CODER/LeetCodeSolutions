class Solution {
public:
    int findInMountainArray(int target, MountainArray &a) {
        int low=0,mid=0, high=a.length()-1;
           while(low<=high)
        {
            mid=low+(high-low)/2;
            if(a.get(mid)<a.get(mid+1))
            low=mid+1;
        else 
             high=mid-1;
        }
        
        int peak=low;
          low=0, high=peak;
          while(low<=high)
        {
            mid=low+(high-low)/2;
              if(a.get(mid)==target)
                  return mid;
            else if(a.get(mid)<target)
                low=mid+1;
            else 
                 high=mid-1;
          }
        
        low=peak+1, high=a.length()-1;
        
          while(low<=high)
        {
            mid=low+(high-low)/2;
              if(a.get(mid)==target)
                  return mid;
              else if(a.get(mid)>target)
                  low=mid+1;
              else 
                  high=mid-1;
          }
        return -1;
    }
};