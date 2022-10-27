class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res = 0;
        unordered_set<char> setjewels(jewels.begin(), jewels.end());
        for (char s : stones)
            if (setjewels.count(s)) res++;
        return res;
    
    }
};