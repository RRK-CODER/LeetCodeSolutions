class Solution {
public:
    long long trip(vector<int>&a, long long int giventime)
    {
        long long int totalTrips=0;
        for(auto i:a)
        {
            long long int val=i;
            totalTrips += (giventime/val);
        }
        return totalTrips;
    }
    
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int low=1, high=1e14;
        while(low<high)
        {
            long long int mid= low+ (high-low)/2;
            if(trip(time,mid)>=totalTrips)
                high=mid;
            else 
                low=mid+1;

        }
        return low;
    }
};