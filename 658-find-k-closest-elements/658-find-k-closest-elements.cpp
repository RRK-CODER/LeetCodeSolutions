class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int low=0, mid=0, high=arr.size()-k;
        while(low<high)
        {
            mid=low+ (high-low)/2;
            if(x-arr[mid]>arr[mid+k]-x)
                low=mid+1;
            else
                high =mid;
        
        }
        return vector<int> (arr.begin()+low,arr.begin()+low+k);
    }
};