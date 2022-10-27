class Solution {
public:
    int maximum69Number (int num) {
        int res=0,p=1,n=num,maxp=0;
       while(num>0)
        {
            res=num%10;
            if(res==6){
                maxp=p;   
        }
        p*=10;
        num/=10;
        }
        n+=maxp*3;
        return n;
    }
};