class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int T) {
        sort(clips.begin(), clips.end());
        int res=0;
        for(auto i=0, start=0, end=0; start<T; start=end, ++res)
        {
            for(; i<clips.size() && clips[i][0]<=start; ++i)
                end=max(end, clips[i][1]);
            if(start==end) return -1;
        }
        return res;
    }
};