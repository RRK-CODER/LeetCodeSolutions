class Solution {
public:
    int subarraysDivByK(vector<int>& A, int k) {
        vector<int> count(k);
        count[0]=1;
        int prefix=0, res=0;
        for(auto i: A)
        {
            prefix = (prefix + i%k +k)%k;
            res+= count[prefix]++;
        }
        return res; 
    }
};