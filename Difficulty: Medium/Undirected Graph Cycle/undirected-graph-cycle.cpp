class Solution {
  public:
  
    bool dfs(int node,int parent, vector<vector<int>>&adj, vector<int>&visited){
        visited[node]=1;
        
        for(int neighbour:adj[node]){
            if(!visited[neighbour]){
                bool ans=dfs(neighbour,node,adj,visited);
                if(ans==true){
                    return true;
                }
            }else if(neighbour!=parent){
                return true;
            }
        }
        return false;
    }
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>adj(V);
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int>visited(V,0);
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(dfs(i,-1,adj,visited)){
                    return true;
                }
            }
        }
        return false;
    }
};