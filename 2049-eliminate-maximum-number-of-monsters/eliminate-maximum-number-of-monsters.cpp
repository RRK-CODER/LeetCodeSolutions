class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<double> v;
        for(int i=0; i<dist.size(); i++)
            {
                double divide=speed[i];
                double temp = dist[i]/divide;
                cout<<temp;
                v.push_back(temp);
            }
            cout<<endl;
            for(auto i: v)
                cout<<i<<" "<<endl;
        sort(v.begin(), v.end());
        int count=1;
        for(int i=1; i<dist.size(); i++)
        {
            if(v[i]>i)
             count++;
            else 
                break;

        }
        return count;
    }
};