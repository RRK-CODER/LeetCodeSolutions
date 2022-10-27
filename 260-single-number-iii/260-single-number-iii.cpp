class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        vector<int> v;
       while(i<nums.size()-1)
        {
        if(nums[i]==nums[i+1])
        {i=i+2;
    }
            else
            {v.push_back(nums[i++]);}
            if (v.size() == 2)
				return v;
              
        }
     if (v.size() == 1) 
		v.push_back(nums.back());
	return v;
    }
};