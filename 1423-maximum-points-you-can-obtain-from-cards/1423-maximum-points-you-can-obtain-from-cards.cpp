class Solution {
public:
     int maxScore(vector<int>& c, int k) {
        int n = c.size(), window = n-k, total = 0, i = 0, sum = 0;
        for(auto e: c) total+=e;
        while(i<window){
            sum+=c[i];
            i++;
        }
        i=0;
        int ans = sum;
        while(i < n-window){
            sum -= c[i];
            sum += c[i+window];
            ans = min(sum, ans);
            i++;
        }
        return total-ans;
    }
};