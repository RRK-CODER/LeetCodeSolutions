class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>v;
        unordered_map<int,int> m;
    
    for(auto  i: arr)
        m[i]++;
        
    priority_queue<pair<int,int>> q;
        for(auto val:m)
        {
            q.push({val.second,val.first});
        }
   while(k--)
   { 
   v.push_back(q.top().second);
       q.pop();
   }
        return v;
    }
};