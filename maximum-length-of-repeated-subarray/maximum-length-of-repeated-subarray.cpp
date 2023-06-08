class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size(),result=0;
        vector<int> prev(m+1,0), cur(n+1,0);
        for(int i=0; i<=m ;i++){
            for(int j=0;j<=n; j++){
                if(i==0 || j==0)
                    cur[j]=0;
                else if(nums1[i-1]==nums2[j-1])
                { cur[j]=1+ prev[j-1];
                result=max(result,cur[j]);}  
                else
                    cur[j]=0;     
            }
            prev=cur;
        }
        return result;
    }
};