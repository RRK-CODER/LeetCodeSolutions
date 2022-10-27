class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0, n =arr.size(),contribution;
        
        for(int i=0; i<n ; i++)
        {
            contribution=ceil((i+1)*(n-i)/2.0);
            sum+=(contribution* arr[i]);
        }
        return sum;
    }
};