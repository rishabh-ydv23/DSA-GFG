class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>>adj(V);
        
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];
            
            adj[u].push_back(v);
        }
        
        vector<int>indegree(V,0);
        
        for(int i=0;i<V;i++){
            for(int neighbour:adj[i]){
                indegree[neighbour]++;
            }
        }
        
        queue<int>q;
        
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        vector<int>topo;
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            
            for(int neighbour:adj[node]){
                indegree[neighbour]--;
                if(indegree[neighbour]==0){
                    q.push(neighbour);
                }
            }
        }
        return topo;
    }
};