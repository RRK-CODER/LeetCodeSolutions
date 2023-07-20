class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> &src, vector<int> & dst) {
            return src[0]==dst[0]? src[1]<dst[1]:src[0]<dst[0];
        });
        priority_queue<int> pq;
        for(int i=0; i<intervals.size(); i++){
            if(pq.empty() || intervals[i][0] >pq.top()){
                pq.push(intervals[i][1]);
            }
            else{
                int cur=pq.top();
                if(intervals[i][1]<=cur){
                    pq.pop();
                    pq.push(intervals[i][1]);
                }
            }
        }
        return pq.size();
    }
};