class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> res;
        int mod = 1e9+7;
        for(int i=0; i<n; i++)
        {
            res.push_back(nums[i]);
            int temp = nums[i];
            for(int j=i+1; j<n; j++){
                temp += nums[j];
                res.push_back(temp);
                
            }
        }
        
        sort(res.begin(), res.end());
        
        for(auto i: res) cout<<i<<" ";
        cout<<endl; 
        long ans =0;
        for(int i=left-1; i<right; i++){
            ans+= res[i]%mod;
        }
        return ans%mod;
    }
};