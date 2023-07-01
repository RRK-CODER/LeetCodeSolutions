class Solution {
private:
    void dfs(int v, vector<vector<bool>>& graph, stack<int>& stack, vector<bool>& visited) {
        if (!visited[v]) {
            visited[v] = true;
            for (int i = 0; i < 26; i++) {
                if (graph[v][i] && !visited[i]) {
                    dfs(i, graph, stack, visited);
                }
            }
            stack.push(v);
        }
    }

    void dfs(int v, vector<vector<bool>>& graph, vector<int>& batches, int batch, vector<int>& degree) {
        if (batches[v] < 0) {
            batches[v] = batch;
            for (int i = 0; i < 26; i++) {
                if (graph[i][v]) {
                    dfs(i, graph, batches, batch, degree);
                }
            }
        } else {
            if (batches[v] != batch) {
                degree[batches[v]] += 1;
            }
        }
    }
public:
    vector<string> maxNumOfSubstrings(string S) {
        vector<int> mins(26, INT_MAX);
        vector<int> maxs(26, -1);
        vector<bool> exists(26, false);
        vector<vector<int>> prefixSum(S.length() + 1, vector<int>(26, 0));

        for (int i = 0; i < S.length(); i++) {
            copy(prefixSum[i].begin(), prefixSum[i].end(), prefixSum[i + 1].begin());
            prefixSum[i + 1][S[i] - 'a'] += 1;
            mins[S[i] - 'a'] = min(mins[S[i] - 'a'], i);
            maxs[S[i] - 'a'] = max(maxs[S[i] - 'a'], i);
            exists[S[i] - 'a'] = true;
        }

        vector<vector<bool>> graph(26, vector<bool>(26, false));
        for (int i = 0; i < 26; i++) {
            if (exists[i]) {
                for (int j = 0; j < 26; j++) {
                    if (prefixSum[maxs[i] + 1][j] - prefixSum[mins[i]][j] > 0) {
                        graph[i][j] = true;
                    }
                }
            }
        }

        stack<int> stack;
        vector<bool> visited(26, false);
        for (int i = 0; i < 26; i++) {
            if (exists[i] && !visited[i]) {
                dfs(i, graph, stack, visited);
            }
        }

        int batch = 0;
        vector<int> batches(26, -1);
        vector<int> degree(26, 0);
        while (!stack.empty()) {
            int v = stack.top();
            stack.pop();
            if (batches[v] < 0) {
                dfs(v, graph, batches, batch, degree);
                batch++;
            }
        }

        vector<string> res;
        for (int i = batch - 1; i >= 0; i--) {
            if (degree[i] == 0) {
                int minIdx = INT_MAX, maxIdx = -1;
                for (int j = 0; j < 26; j++) {
                    if (batches[j] == i) {
                        minIdx = min(mins[j], minIdx);
                        maxIdx = max(maxs[j], maxIdx);
                    }
                }
                res.push_back(S.substr(minIdx, maxIdx - minIdx + 1));
            }
        }

        return res;
    }
};