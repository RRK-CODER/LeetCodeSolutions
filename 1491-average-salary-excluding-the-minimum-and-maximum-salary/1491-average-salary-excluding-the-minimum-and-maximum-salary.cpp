class Solution {
public:
    double average(vector<int>& salary) {
double n=salary.size(),sum=0;
        for(int i=0; i<n; i++)
        {sum +=salary[i];}
        sort(salary.begin(), salary.end());
        
        return double((sum-salary[0]-salary[salary.size()-1])/(n-2));
    }
};