class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n=graph.size();
        if(n==1) return 0;
        string allvisit(graph.size(), '1');
        queue<pair<int,string>> q;
        string cur(n, '0');
        set<pair<int,string>> vis;

        for(int i=0; i<graph.size(); i++){
            cur[i]='1';
            q.push({i, cur});
            vis.insert({i, cur});
            cur[i]='0';
        }

        int step=0, v; 
        char tempchar;

        while(!q.empty()){
            int size=q.size();
            while(size--)
            {
                v=q.front().first;
                cur=q.front().second;
                q.pop();

                for(int i=0; i<graph[v].size(); i++){
                    tempchar=cur[graph[v][i]];
                    cur[graph[v][i]] = '1';
                    if(cur==allvisit) return step+1;
                    if(!vis.count({graph[v][i], cur}))
                    {
                        q.push({graph[v][i], cur});
                        vis.insert({graph[v][i], cur});
                    }
                    cur[graph[v][i]] = tempchar;
                }
            }
            step++;
        }
        return -1;
    }
};