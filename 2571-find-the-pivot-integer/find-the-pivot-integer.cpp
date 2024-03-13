class Solution {
public:
    int pivotInteger(int n) {
        for(int i=1; i<=n; i++)
        {   int sum = n*(n+1)/2;
            
            int sum1= i*(i+1)/2;
            cout<<sum1<<" ";
            int sum2= sum-sum1+i;
            cout<<sum2<<" ";
            if(sum1==sum2) return i;
        }
        return -1;
    }
};