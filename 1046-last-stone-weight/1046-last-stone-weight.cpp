class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
       priority_queue<int> pq(s.begin(), s.end());
      while(true)
      {
          if(pq.size()==0) return 0;
          if(pq.size()==1) return pq.top();
          int a=pq.top();
          pq.pop();
          int b=pq.top();
          pq.pop();
          if(a!=b) pq.push(abs(a-b));
      }
    }
};