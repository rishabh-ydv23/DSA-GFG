class Solution {
  public:
  
  void dfs(int node, vector<bool>&visited, vector<vector<int>>&adj,vector<int>&component){
      visited[node]=1;
      component.push_back(node);
      
      for(int neighbour:adj[node]){
          if(!visited[neighbour]){
              dfs(neighbour,visited,adj,component);
          }
      }
  }
  
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>>adj(V);
        
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool>visited(V,0);
        vector<vector<int>>components;
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                vector<int>component;
                dfs(i,visited,adj,component);
                components.push_back(component);
            }
        }
        
        return components;
    }
};


