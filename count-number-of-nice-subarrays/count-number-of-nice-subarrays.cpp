class Solution {
    int atmostk(vector<int> &A, int K){
        int i=0, res=0;
        for(int j=0; j<A.size(); j++){
            K -= A[j]%2;
            while(K<0){
                K += A[i++]%2;
            }
            res += j-i+1;
        }
        return res;
    }
public:
    int numberOfSubarrays(vector<int>&A, int K) {
        return atmostk(A,K) - atmostk(A, K-1);
    }
};