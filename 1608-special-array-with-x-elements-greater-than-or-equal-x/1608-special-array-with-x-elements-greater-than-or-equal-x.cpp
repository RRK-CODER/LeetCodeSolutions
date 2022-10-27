class Solution {
public:
    int check(vector<int>& arr,int mid){
        int cnt = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] >= mid)    cnt++;
            if(cnt > mid)   return cnt;
        }
        
        return cnt;
    }
    
    int specialArray(vector<int>& arr) {
        int lo = 0, hi = *max_element(arr.begin(),arr.end());
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            int p = check(arr,mid);
            if(p == mid)    return mid;
            else if(p < mid){
                hi = mid -1 ;
            }else{
                lo = mid + 1;
            }
        }
        return -1;
    }
};