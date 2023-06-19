class Solution {
public:
    bool bfs(int value, vector<vector<int>> grid, vector<int> &visited){
        queue<int> q;
        q.push(value);
        visited[value] = 0;

        while(!q.empty())
        {
            vector<int> temp = grid[q.front()];
            int val = q.front();
            q.pop();

            for(int i=0; i<temp.size(); i++)
            {
                if(visited[temp[i]] == -1)
                {
                    visited[temp[i]] = !visited[val];
                    q.push(temp[i]);
                }
                else if(visited[temp[i]] == visited[val])
                    return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int node=graph.size();
        vector<int> visited(node, -1);
        for(int i=0; i<node; i++)
        {
            if(visited[i]==-1)
            {
                if(bfs(i,graph, visited)==false)
                return false;
            }
        }
        return true;
    }
};