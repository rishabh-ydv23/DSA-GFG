class Solution {
  public:
  
    bool dfs(int node, vector<vector<int>>&adj, vector<int>&visited, vector<int>&pathVisited){
        visited[node]=1;
        pathVisited[node]=1;
        
        for(int neighbour:adj[node]){
            if(!visited[neighbour]){
                if(dfs(neighbour, adj, visited, pathVisited)==true){
                    return true;
                }
            }else if(visited[neighbour]==true && pathVisited[neighbour]==true){
                return true;
            }
        }
        pathVisited[node]=0;
        return false;
    }
  
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>>adj(V);
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
        }
        
        vector<int>visited(V,0);
        vector<int>pathVisited(V,0);
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(dfs(i,adj,visited,pathVisited)==true){
                    return true;
                }
            }
        }
        return false;
        
    }
};