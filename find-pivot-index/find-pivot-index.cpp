class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size(), ans=-1;
        vector<int> v1(n, 0);
        vector<int> v2(n, 0);

        v1[0]=nums[0];
        for(int i=1; i<n; i++)
            v1[i]=v1[i-1]+nums[i];

        v2[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--)
            v2[i]=nums[i]+ v2[i+1];
        
        for(int i=0; i<n; i++)
        {
            if(v1[i]==v2[i]) 
            {
            ans=i;
            break;
            }

        }
        return ans;
    }
};