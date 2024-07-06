class Solution {
public:
    int passThePillow(int n, int time) {
        int i=1, direction ;
        vector<int> arr;
        while(i<=n){
            arr.push_back(i++);
        }
        i-=2;
        while(n-2>0){
            arr.push_back(i--);
            n--;
        }
        for(auto i: arr)
            cout<<i<<" ";
        cout<<endl;
        int size=arr.size();
        int temp = time%size;
        return arr[temp];
    }
};