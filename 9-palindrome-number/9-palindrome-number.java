class Solution {
    public boolean isPalindrome(int x) {
        if(x< 0 )
            return false;
        else
        {
            int rev=0;
            int temp=x;
            
            while(temp!=0)
            {
                int ld= temp%10;
            rev=rev*10+ld;
            temp=temp/10;
            }
            if (rev==x )
                return true; 
            else 
                return false;
        }
    }
}