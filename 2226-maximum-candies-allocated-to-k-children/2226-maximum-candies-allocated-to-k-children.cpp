class Solution {
public:
    
    bool possible(vector<int>& candies , long long k , long long m)
    {
        long long int count =0;
         for(int i=0; i< candies.size() ;i++)
        { count+=candies[i]/m;}
        return count>=k;
   
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long int ans =0;
        long long int l =1, h =1e18;
        
        while(l <=h)
        {
            long long int mid = (h-l)/2 + l;
            if(possible (candies , k , mid)){
                ans =mid;
                l=mid+1;
            }
            else 
                h=mid-1;
        }
        return ans;
    }
};