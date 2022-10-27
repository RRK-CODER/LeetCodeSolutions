class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int j=0,sum=0 , maxm=0;
        vector <int> v(10001,-1);
        for(int i=0 ;i<nums.size(); i++)
        {
           if(v[nums[i]]!=-1) while(j<=v[nums[i]]) sum-=nums[j++];
                sum+=nums[i];
                v[nums[i]]=i;
                maxm=max(sum,maxm);
        }
        return maxm;
    }
};

       