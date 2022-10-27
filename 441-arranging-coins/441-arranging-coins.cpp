class Solution {
public:
    int arrangeCoins(long long int n) {
    
        return (-1+pow((1+8*n),0.5))/2;
    }
};