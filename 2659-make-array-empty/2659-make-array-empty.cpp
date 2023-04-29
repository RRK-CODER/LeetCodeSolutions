class Solution {
public:
    long long countOperationsToEmptyArray(vector<int>& A) {
        unordered_map<int, int> pos;
        int n=A.size(), p=0;
        long long res=n;
        for(int i=0; i<n; i++)
            pos[A[i]] = i;
        sort(A.begin(), A.end());
        for(int i=0; i<n; p=pos[A[i++]])
            if(pos[A[i]]<p)
                res+=n-i;
        return res;
    }
};