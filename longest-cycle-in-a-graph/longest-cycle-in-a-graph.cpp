class Solution {
private:
    void dfs(vector<int>& edges, int source, stack<int>& stack) {
        visited[source] = true;
        int child = edges[source];
        if (child != -1 && !visited[child])
            dfs(edges, child, stack);
        stack.push(source);
    }

    void specialDfs(vector<vector<int>>& graph, int source) {
        visited[source] = true;
        count++;
        for (int child : graph[source]) {
            if (!visited[child])
                specialDfs(graph, child);
        }
    }
    vector<bool> visited;
    int count;

public:
    int longestCycle(vector<int>& edges) {
        int len = edges.size();
        stack<int> stack;
        visited.resize(len, false);

        for (int i = 0; i < len; i++) {
            if (edges[i] != -1 && !visited[i])
                dfs(edges, i, stack);
        }
        vector<vector<int>> graph(len);
        for (int i = 0; i < len; i++) {
            if (edges[i] != -1)
                graph[edges[i]].push_back(i);
        }

        visited.assign(len, false);
        int maxCycle = 0;
        while (!stack.empty()) {
            int top = stack.top();
            stack.pop();
            if (visited[top])
                continue;
            count = 0;
            specialDfs(graph, top);
            maxCycle = max(maxCycle, count);
        }
        return (maxCycle > 1) ? maxCycle : -1;
    }


};