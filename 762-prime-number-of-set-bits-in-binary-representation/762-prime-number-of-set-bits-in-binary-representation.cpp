class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int i=left ; i<=right ; i++)
        {
if(bit(i)) 
            count++;
        }
        return count ;
    }
        
        
    bool bit(int n)
    {
        int res =0;
while(n>0)
{       if(n%2!=0)
            res++;
 n=n/2;
 }

    
     int a[8]={2,3,5,7,11,13,17,19};
        for(int i=0;i<8;i++){
            if(a[i]==res)
                return true;
        }
        return false;
        
    }
};