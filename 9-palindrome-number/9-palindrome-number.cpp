class Solution {
public:
    bool isPalindrome(int x) {
        if(x< 0 )
            return false;
        else
        {
            long long int rev=0;
            long long int temp=x;
            
            while(temp!=0)
            {
              long long int ld= temp%10;
            rev=rev*10+ld;
            temp=temp/10;
            }
            if (rev==x )
                return true; 
            else 
                return false;
        }
    }
};