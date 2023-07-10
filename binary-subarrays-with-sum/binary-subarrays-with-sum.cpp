class Solution {
    int atMost(vector<int>& A, int K){
        if(K<0) return 0;
        int res=0, i=0, n=A.size();
        for(int j=0; j<n; j++){
            K-= A[j];
            while(K<0)
                K+= A[i++];
            res += j-i+1;
        }
        return res;
    }
public:
    int numSubarraysWithSum(vector<int>& A, int K) {
       return atMost(A,K) - atMost(A, K-1);
    }
};