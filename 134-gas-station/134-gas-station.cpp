class Solution {
public:
    int canCompleteCircuit(vector<int>& petrol, vector<int>& dist) {
        int curr_pet=0, prev_pet=0, start=0,count;
        for(int i=0; i<petrol.size(); i++)
        {curr_pet+=petrol[i]-dist[i];
            if(curr_pet<0)
            { start=i+1;
            prev_pet+=curr_pet;
            curr_pet=0;}}
        return ((curr_pet+prev_pet)>=0)?(start):-1;
    }
};