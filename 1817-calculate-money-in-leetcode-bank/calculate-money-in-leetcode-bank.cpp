class Solution {
public:
    int totalMoney(int n) {
        int m=n%7, q=n/7, res=0;
        return (49 + 7 * q) * q / 2 + (2 * q + m + 1) * m / 2;
    }
};