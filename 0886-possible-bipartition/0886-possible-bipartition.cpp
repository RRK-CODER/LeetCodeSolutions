class Solution {
public:
    bool isBiparted(int node, vector<int> &color, unordered_map<int,list<int>> &adjList)
    {
          queue<int> q;
        color[node]=1;
        q.push(node);
        while(!q.empty())
        {
            int front =q.front();
            q.pop();
            for(int adj: adjList[front])
            {
                if(color[adj]==color[front]) 
                    return false;
                if(color[adj]==-1)
                {
                    color[adj]=1-color[front];
                    q.push(adj);
                }
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
      unordered_map<int, list<int>> adjList;
        for(auto edge: dislikes)
        {
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }
        vector<int> color(n+1,-1);
        {
            for(int i=1; i<=n ;i++)
            {
                if(color[i]==-1)
                    if(isBiparted(i,color, adjList)==false) return false;
            }
        }
        return true;
    }
};