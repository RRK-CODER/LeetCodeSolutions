class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
          int left=0, right=n.size()-1;
          while(left<right)
        {
      if(n[left]+n[right]< target)
         {left++;}
       else if (n[left]+n[right]> target) 
        {  right--; }  
        
        else 
            return {left+1, right+1};
          }
     return {left+1, right+1};
    }
};