class Solution {
  public:
    int shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
        // code hervecte
        vector<vector<int>>adj(V);
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int>dist(V,-1);
        queue<int>q;
        
        dist[src]=0;
        q.push(src);
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            
            for(int neig:adj[node]){
                if(dist[neig]==-1){
                    dist[neig]=dist[node]+1;
                    q.push(neig);
                }
            }
        }
        return dist[dest];
    }
};
