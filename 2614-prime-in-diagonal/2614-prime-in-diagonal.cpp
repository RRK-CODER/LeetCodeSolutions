class Solution {
    bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int res=0;
       for(int i=0; i<nums.size(); i++)
       {
           for(int j=0; j<nums[0].size(); j++)
           {
               if(i==j || j==nums.size()-i-1)
               {
                   if(isPrime(nums[i][j])==true)
                   {
                       res= max(nums[i][j], res);
                   }
                       
               }
           }
       }
        return res;
    }
};