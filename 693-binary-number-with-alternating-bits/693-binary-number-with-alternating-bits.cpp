class Solution {
public:
    bool hasAlternatingBits(int n) {
        while(n!=0)
        {
   int a=n&1;
        n=n/2;
        int b=n&1;
            if(a==b)
                return false;
        }    
        return true;
    }
};