class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0,mid=0, high=arr.size();
        while(low<high)
        {
            mid= low +(high-low)/2;
            int b=arr[mid]-mid-1;
            if(b<k)
            {
                low=mid +1;
            }
            else
            {
high=mid;
            }
                
        }
        return low+k;
    }
};