class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> v;
        for(int i=0; i< s1.size(); i++)
        {
            if(s1[i]!=s2[i])
          
                v.emplace_back(i);
            
                if(v.size()>2)
            return false;
        }
      if(v.empty())
          return true;
        if(v.size()==2)
            swap(s1[v[0]],s1[v[1]]);
        return s1==s2;
    }
};
