class Solution {
public:
    int count(int m, int n , int x)
    {
        int ans=0;
        for(int i=1; i<=m ;i++)
        ans+=min(x/i,n);
        return ans;
    }
    int findKthNumber(int m, int n, int k) {
        int low=1, high=m*n,mid,ans;
        while(low<=high)
        {   mid=low+(high-low)/2;
            if(count(m,n,mid)<k) low=mid+1;
            else{high =mid-1;
         ans=mid;} 
        }
        return ans;
    }
};