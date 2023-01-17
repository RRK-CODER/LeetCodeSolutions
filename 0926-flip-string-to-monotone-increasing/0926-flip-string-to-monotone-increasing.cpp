class Solution {
public:
    int minFlipsMonoIncr(string S) {
       int countOne=0, countFlip=0;
        for(auto ch:S)
        {
            if(ch=='1')
                countOne++;
            else
                countFlip++;
            
            countFlip=min(countOne, countFlip);
        }
        return countFlip;
    }
};