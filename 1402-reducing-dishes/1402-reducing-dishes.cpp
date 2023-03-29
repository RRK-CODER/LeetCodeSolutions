class Solution {
public:
    int maxSatisfaction(vector<int>& A) {
        sort(A.begin(), A.end());
        int total=0, res =0, n=A.size();
        for(int i=n-1 ; i>=0 && A[i] > -total ; i--)
        {
            total += A[i];
            res += total;
        }
        return res;
    }
};