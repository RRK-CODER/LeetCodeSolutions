class Solution {
public:
    int DSS(int n)
    {
         int res,sum=0;
        while(n)
        {
            res=n%10;
             sum+=res*res;
            n=n/10;
       
        }
        return sum;
    }
    bool isHappy(int n) {
       int slow, fast;
        slow=fast=n;
        do{
            slow=DSS(slow);
            fast=DSS(fast);
            fast=DSS(fast);
        }while(slow!=fast);
        if(slow==1)
            return 1;
        else
            return 0;
        
    }
};