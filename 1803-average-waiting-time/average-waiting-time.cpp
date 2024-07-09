class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& num) {
        double total_wait = 0 , start = num[0][0], end=0;
        for(int i=0; i<num.size(); i++){
            if(start>=num[i][0]){
                total_wait+= start-num[i][0];
            }
            else{
                start = num[i][0];
            }
            end = start + num[i][1];
            total_wait+= end - start;
            start = end;
        }
        cout<<total_wait<<" "<<endl;
        double n=num.size();
        double res = total_wait/n;
        return  res;
        
    }
};