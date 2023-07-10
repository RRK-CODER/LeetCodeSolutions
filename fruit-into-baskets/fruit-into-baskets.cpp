class Solution {
public:
    int totalFruit(vector<int>& A) {
        int i=0, j, n=A.size(), K=2;
        unordered_map<int,int> count;
        for(j=0; j<n; j++){
            count[A[j]]++;
            if(count.size()>K){
                if(--count[A[i]] == 0 )
                count.erase(A[i]);
                i++;
            }
        }
        return j-i;
    }
};