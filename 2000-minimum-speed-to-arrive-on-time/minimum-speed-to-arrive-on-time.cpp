class Solution {
public:
    double cost(vector<int>&dist, int mid)
    {
        double res=0;
        for(int i=0; i<dist.size()-1; i++)
            {
                res+=ceil(((double)dist[i])/mid);
            }
            res+= ((double) dist[dist.size()-1]/mid);
            
        return res;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low=0, high=1e7, mid=0, res=INT_MAX;
        while(low<=high){
            mid=low+(high-low)/2;
        if(cost(dist, mid) > hour)
        {
            low=mid+1;
        }
        else{
            res=min(res, mid);
            high=mid-1;
             }
        }
        return res!=INT_MAX? res: -1;
    }
};