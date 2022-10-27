class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector <int> answer(n, 1);
        
              vector <vector <int>> graph(n);
        for (vector v: paths) {
            graph[v[0] - 1].push_back(v[1] - 1);
            graph[v[1] - 1].push_back(v[0] - 1);
        }
      for (int garden = 0; garden < n; garden++) {
         vector <bool> colors(5, false);
            for (int c: graph[garden]) {
                colors[answer[c]] = true;
            }
             for (int i = 4; i > 0; i--) {
                if (!colors[i]) {
                    answer[garden] = i;
                }
            }            
        }
        
        return answer;
    }
};