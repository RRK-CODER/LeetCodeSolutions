class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        unordered_map<int, vector<int>> subset;
        for(auto &num: nums){
            if(!freq.count(num))
                subset[num%k].push_back(num);
            freq[num]++;
        }
        
        int prev=-1, take =0, skip=0;
        for(auto &p:subset){
            sort(p.second.begin(), p.second.end());
            for(auto &num: p.second){
                int cnt = pow(2, freq[num]) -1;
                if(prev!=-1){
                    int before = skip;
                    skip += take;
                    take = cnt * (num-prev ==k? before+1: take + before + 1);
                }
                else{
                    take = cnt; 
                    skip =0;
                }
                prev = num;
            }
        }
        return take + skip ;
    }
};