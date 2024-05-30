class Solution {
public:
    int change(int tar, vector<int>& coins) {
        int n= coins.size();
        vector<long> prev(tar+1, 0);
        for(int i=0; i<=tar; i++)
            if(i%coins[0]==0) prev[i]=1;
        
        for(int ind=1; ind<n; ind++){
            vector<long> cur(tar+1,0);
            for(int target=0; target<=tar; target++){
                long notTaken = prev[target];
                long taken =0;
                if(coins[ind]<=target)
                    taken = cur[target-coins[ind]];
                cur[target]=taken + notTaken;
            }
            prev=cur;
        }
        return prev[tar];
    }
};