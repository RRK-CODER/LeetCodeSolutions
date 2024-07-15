class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0, neg=0, high=nums.size()-1, low =0; 
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]>0){
                pos+= (high-mid)+1;
                high= mid - 1;}
            else if(nums[mid]<0){
                neg+= (mid-low)+1;
                low = mid+1;}
            else{              
                int k=mid;
                while(k-1>=0 && nums[k-1]==0){
                    k--;
                }
                neg += (k-low);
                k=mid;
                while(k<high && nums[k+1] == 0){
                    k++;
                }
                pos+=(high-k);
                break;
            }
        }
        int ans = max(pos, neg);
        return ans;
    }
};