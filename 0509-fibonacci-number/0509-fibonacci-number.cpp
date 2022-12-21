class Solution {
public:
    int fib(int n) {
        int memo[31];
      	memset(memo, -1, sizeof(memo));
       
            if(memo[n]==-1)
            {
                int res;
                if(n==0 || n==1)
                    res=n;
                else
                {res=fib(n-1)+fib(n-2);}
                    
                memo[n]=res;
            }
        
    return memo[n];
    }
};