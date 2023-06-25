class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        if(num2>num1) return -1;
        int maxi=0;
        for(int i=1; i<=101; ++i)
        {
            long long temp=num1-(long long int) num2*i;
            if(i<=temp && __builtin_popcountll(temp) <= i) return i;
        }
        return -1;
    }
};