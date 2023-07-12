class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0, r=h.size()-1, res=0;
        while(l<r){
            int lh=h[l];
            int rh=h[r];
            res = max(res, min(lh, rh) *(r-l));
            if(lh> rh) r--;
            else l++;
        }
        return res;
    }
};