vector<int> topoSort(vector<int> adj[], int n) {
        vector<int> inDegree(n, 0), ans;
        int count = 0;
        queue<int> q;
    
        for(int i = 0; i < n; i++) for(auto it : adj[i]) inDegree[it]++;
        for(int i = 0; i < n; i++) if(inDegree[i] == 0) q.push(i);
        
        while(q.size() != 0) {
            int node = q.front();
            q.pop();
            count++;
            ans.push_back(node);
            
            for(auto it : adj[node]) {
                if(inDegree[it]) {
                    inDegree[it]--;
                    if(inDegree[it] == 0) q.push(it);
                }
            }
        }
        if(count == n) return ans;
        return {};
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(int i = 0; i < prerequisites.size(); i++)
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        vector<int> ans = topoSort(adj, numCourses);
        reverse(ans.begin(), ans.end());
        return ans;
    }

