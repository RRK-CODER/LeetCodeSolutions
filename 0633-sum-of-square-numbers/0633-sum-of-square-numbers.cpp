class Solution {
public:
    bool judgeSquareSum(int c) {
    long long low=0, high=sqrt(c);
        while(low<=high)
        {
            if(low*low+high*high==c)
                return true;
            else if(low*low+high*high>c)
                high--;
            else 
                low++;
        }
        return false;
    }
};