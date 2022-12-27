class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int k) {
               vector<int> v;
        int n=rocks.size(),i;
        for(int i=0; i< rocks.size(); i++)
        v.push_back(capacity[i]-rocks[i]);
        sort(v.begin(), v.end());
        for (i = 0; i < n && k >= v[i]; ++i)
            k -= v[i];
        return i;
      
    }
};