class Solution {
    int rev(int num) 
    { 
        int rev_num = 0; 
        while (num > 0) { 
            rev_num = rev_num * 10 + num % 10; 
            num = num / 10; 
        } 
        return rev_num; 
    } 
public:
    int mod=1e9+7;
    int countNicePairs(vector<int>& nums) {
    int res=0;
    unordered_map<int, int> count;
    for(int& a: nums)
        res = (res+count[a-rev(a)]++)%mod;
    return res;
    }
};