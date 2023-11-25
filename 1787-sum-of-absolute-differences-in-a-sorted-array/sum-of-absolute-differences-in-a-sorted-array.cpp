class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> presum, suffix, res;
        int temp=0;
        for(auto i: nums)
        {
            temp+=i;
            presum.push_back(temp);
        }
        temp=0;
        for(int i=nums.size()-1;i>=0;  i--)
        {
            temp+=nums[i];
            suffix.push_back(temp);
        }
        reverse(suffix.begin(), suffix.end());
        // for(auto i: presum)
        //     cout<<i<<" ";
        // cout<<endl;

        // for(auto i: suffix)
        //     cout<<i<<" ";
        // cout<<endl;
        // return res;
        int n=nums.size();
        temp=0;
        for(int i=0; i<n; i++)
        {
            if(i!=n-1)
            {
              temp += abs(suffix[i+1]-((n-i-1)*nums[i]));
              cout<<temp<<" ";
            }
            if(i!=0)
            {
                temp+= abs(presum[i-1]-((i)*nums[i]));
                cout<<temp<<" ";
            }
            res.push_back(temp);
            temp=0;
        }
    return res;
    }
};