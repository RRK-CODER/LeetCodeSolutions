class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<double> prob(n);
        prob[start] =1;
        for(int i=0; i<n; i++)
        {
            bool relaxed=false;
            for(int j=0; j<edges.size(); j++){
                int u=edges[j][0], v=edges[j][1];
                double w=succProb[j];

                if(prob[v]*w > prob[u]){
                    prob[u] = prob[v] * w;
                    relaxed=true;
                }
                if(prob[u]*w> prob[v]){
                    prob[v]=prob[u]*w;
                    relaxed=true;

                }
            }
            if(!relaxed) break;
        }
        return prob[end];
    }
};