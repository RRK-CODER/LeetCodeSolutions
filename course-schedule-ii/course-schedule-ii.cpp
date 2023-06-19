class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n];
        for(auto it: prerequisites) adj[it[1]].push_back(it[0]);
        queue<int>q;
        vector<int> indegree(n, false);
        for(int i=0; i<n;i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
        }
        for(int i=0; i<n; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        vector<int> topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);

            for(int it: adj[node]){
                indegree[it]--;
                if(indegree[it] == 0) q.push(it);
            }
        }
        if(topo.size() == n) return topo;
        else return {};
    }
};