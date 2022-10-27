class Solution {
public:
    int helper(long long n){
        int res=0;
        while(n!=0){
            n = n&(n-1);
            res++;
        }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        unordered_map<int , int> lookup;
        for(int i=0 ; i<256 ; i++){
            lookup[i] = helper(i);
        }
        ans.push_back(0);
        for(int i=1 ; i<n+1 ; i++){
            int temp = 0;
            int curr = i;
            while(curr!=0){
                temp = temp + lookup[curr%256];
                curr = curr/256;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};