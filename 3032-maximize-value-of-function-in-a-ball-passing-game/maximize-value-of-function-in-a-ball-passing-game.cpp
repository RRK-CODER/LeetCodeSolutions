class Solution {
public:
    long long getMaxFunctionValue(vector<int>& adjacencyList, long long k) {
        long long n=adjacencyList.size();
        long long maxFunctionValue =0;
        vector<vector<long long>> parent(n, vector<long long> (40,0));
        vector<vector<long long>> sum(n, vector<long long>(40,0));

        for(long long i=0; i<n; i++){
            parent[i][0]= adjacencyList[i];
            sum[i][0] = adjacencyList[i];
        }

        for(long long i=1; i<40; i++){
            for(long long j=0; j<n; j++){
                parent[j][i]= parent[parent[j][i-1]][i-1];
                sum[j][i] = sum[j][i-1]+sum[parent[j][i-1]][i-1];
            }
        }

        for(long long i=0; i<n; i++){
            long long currentFunctionValue=i;
            long long currentPosition=i;
            long long shift=1;
            for(long long j=0; j<40; j++){
                if(j!=0) shift <<=1;
                if(k & shift){
                    currentFunctionValue += sum[currentPosition][j];
                    currentPosition = parent[currentPosition][j];
                }
            }
            maxFunctionValue = max(maxFunctionValue, currentFunctionValue);
        }
        return maxFunctionValue;
    }
};