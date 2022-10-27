class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int > m;
        for(auto i: nums)
            m[i]++;
        sort(begin(nums),end(nums),[&](int a , int b){
            return m[a]==m[b]? a>b: m[a]<m[b];
        }
            );
        return nums;
    }
};
