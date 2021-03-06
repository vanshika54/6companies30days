

typedef pair<double,int> pdi;

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int src, int end) {
        vector<vector<pdi> > graph(n);
        vector<double> prob(n,0);
        
        prob[src] = 1.0;
        for(int i = 0; i < edges.size(); i++){
            auto edge = edges[i];
            int u = edge[0], v = edge[1];
            auto d = succProb[i];
            
            graph[u].push_back({d,v});
            graph[v].push_back({d,u});
        }
        
        priority_queue<pdi> pq;
        pq.push({prob[src],src});
        
        while(!pq.empty()){
            auto curr = pq.top();
            pq.pop();
            int u = curr.second;
            
            for(auto &[d,v] : graph[u]){
                if(prob[v] < prob[u]*d){
                    prob[v] = prob[u]*d;
                    pq.push({prob[v],v});
                }
            }
        }
        
        return prob[end];
    }
};



