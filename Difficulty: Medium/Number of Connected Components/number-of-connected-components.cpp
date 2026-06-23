class Solution {
  public:
  
    void dfs(int node,vector<bool>&visited, vector<vector<int>>&adj){
        visited[node]=1;
        
        for(int neighbour:adj[node]){
            if(!visited[neighbour]){
                dfs(neighbour,visited,adj);
            }
        }
    }
  
    int countConnected(int V, vector<vector<int>>& edges) {
        // code here
        vector< vector<int>>adj(V);
        
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        int count=0;
        
        vector<bool>visited(V,0);
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,visited,adj);
                count++;
            }
        }
        return count;
        
    }
};