class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int diff=max(abs(sx-fx), abs(sy-fy));
        if(sx==fx && sy==fy && t<2 && t!=0) return false;
        
        if(diff<=t)
        {
            return true;
        }
        else return false;
    }
};