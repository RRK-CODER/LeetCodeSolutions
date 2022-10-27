class Solution {
public:
     bool isFeasible(vector<int>& w,int k, int ans)
    {
        int req=1,sum=0;
        for(int i=0; i<w.size(); i++)
        {
            if(sum+w[i]>ans)
            {
                req++;
                sum=w[i];
            }
            else 
                sum+=w[i];
         }
        return (req<=k);
    }
    int splitArray(vector<int>& w, int k) {
        int sum=0, mx=0;
        for(int i=0; i<w.size(); i++)
        {
            sum+=w[i];
            mx=max(mx,w[i]);
        }
        int low=mx, high=sum, res=0;
        while(low<=high)
        {
            int mid=low +(high-low)/2;
            if(isFeasible(w,k,mid))
            {
                res=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return res;
    }
    
};