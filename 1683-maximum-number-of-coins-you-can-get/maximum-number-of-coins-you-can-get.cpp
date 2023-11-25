class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int temp=0, res=0,n=piles.size(), size= n/3, i=2;
        while(size>0)
        {

            temp=piles[n-i];
            res+=temp;
            cout<<temp<<" ";;
            size--;
            i+=2;
        }
        return res;
    }
};