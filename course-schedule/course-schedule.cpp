class Solution {
    bool dfsCheck(int node, vector<vector<int>>& adj, vector<int>& vis,vector<int>& pathVis){
        vis[node]=1;
        pathVis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                if(dfsCheck(it, adj, vis, pathVis) == true)
                return true;
            }
            else if(pathVis[it])
                return true;
        }
        pathVis[node]=0;
        return false;
    }
public:
    bool canFinish(int V, vector<vector<int>>& pre) {
        vector<vector<int>> adj(V);
        for(int i=0; i<pre.size(); i++){
            adj[pre[i][1]].push_back(pre[i][0]);
        }
        vector<int> vis(V, 0);
        vector<int> pathVis(V,0);

        for(int i=0; i<V;i++)
        {
            if(!vis[i]){
                if(dfsCheck(i, adj, vis, pathVis)== true) return false;
            }
        }        
        return true;
    }
};