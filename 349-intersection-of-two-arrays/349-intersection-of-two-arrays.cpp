class Solution {
public:
    int binarysearch(vector <int> arr, int l, int r , int m)
    {
        while(l<=r)
        {
            int mid= l +(r-l)/2;
            if(m==arr[mid])
           return mid;
            else if(arr[mid]< m)
            {
                l=mid+1;
            }
            else 
                r=mid-1;
        }  
        return -1;
    }
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector <int> ans;
    set <int> s;
    int l,r;
    int mid;
    if(nums1.size()< nums2.size())
    {
     r= nums2.size()-1;
        
        for(int i=0; i<nums1.size(); i++)
        {
           int pos= binarysearch(nums2,0,r,nums1[i]);
            if(pos!=-1)
                s.insert(nums2[pos]);
        }
    }
    else
        {
     r= nums1.size()-1;
        
        for(int i=0; i<nums2.size(); i++)
        {
           int pos= binarysearch(nums1,0,r,nums2[i]);
            if(pos!=-1)
                s.insert(nums1[pos]);
        }
    }
          for(auto it:s)ans.push_back(it);
       
    
     return ans;
}
};