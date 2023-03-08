class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int left=1,right=1000000000;
        while(left<=right)
        {
           long long int mid=left+(right-left)/2;
            if(canitintime(piles,mid,h))right=mid-1;
            else left=mid+1;
        }
        return left;
        }
  long long int canitintime(vector<int>&piles, int k, int h){
        long long int hours=0;
        for(long long int pile:piles)
        {
           long long int div=pile/k;
        hours+=div;
        if(pile%k!=0)hours++;  
        }
        return hours<=h;
      
}
};