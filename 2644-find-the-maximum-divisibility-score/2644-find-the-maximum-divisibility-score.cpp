class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxm=0, res=0, index=0, ans=1e9;
        for(int i=0; i<divisors.size(); i++)
        {
            for(int j=0; j<nums.size(); j++)
            {
                if(nums[j]%divisors[i]==0)
                    maxm++;
            }
             if(maxm>res) 
             {
                 index=i;
                 ans=divisors[index];
             }
            if(maxm==res)
            {
                index=i;
                  ans=min(divisors[index], ans);
                
            }
                    
            res=max(res, maxm);
             maxm=0;
           
        }
    
        return ans;
    }
};