class Solution {
public:
    int find(int ind,vector<int> &v,bool buy,vector<vector<int>> &memo)
{    
    if(ind>=v.size()) return 0;
    if(memo[ind][buy]!=-1) return memo[ind][buy];
    
    if(buy) 
    {      
        
       return memo[ind][buy]=max(-v[ind]+find(ind+1,v,!buy,memo),find(ind+1,v,buy,memo));  
    }
    else   
    {     
      
       return memo[ind][buy]=max(v[ind]+find(ind+1,v,!buy,memo),find(ind+1,v,buy,memo));  
    }
     
}
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        if(n<2) return 0;
        vector<vector<int>> v(n+1,vector<int>(2,-1));
        
        return find(0,prices,1,v); 
    }
};