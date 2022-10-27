class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     vector<int> v;
  int j;
    for(int i=0;i<nums1.size();i++)
     {
         int count=100000;
     for( j=0;j<nums2.size();j++)
      {
          if(nums1[i]==nums2[j])
              count=nums2[j];
          if(count<nums2[j])
      {
          v.push_back(nums2[j]);
           break;
           }
          }
          if(j==nums2.size())
          v.push_back(-1);

           }
             return v;
           }
         };
 