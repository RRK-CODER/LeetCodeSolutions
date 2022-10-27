class Solution {
public:
    int arraySign(vector<int>& nums) {
        int res=-1, count,ans;
        for(int i=0; i< nums.size(); i++)
        {
            if(nums[i]==0)
            {
                res= 0; 
            break;}
            else if(nums[i]<0)
                count++;
            else 
                continue;
            
        }
        if(res==0)
            ans= 0; 
        else
        {if(count%2==0)
            ans= 1;
        else if(count%2!=0)
            ans= -1;}
        
       
        return ans;
    }
};