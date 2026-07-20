class Solution {
  public:
  
    void dfs(int node, vector<int>&visited, vector<vector<int>>&adj, stack<int>&st){
        visited[node]=1;
        
        for(int neighbour:adj[node]){
            if(!visited[neighbour]){
                dfs(neighbour,visited,adj,st);
            }
        }
        st.push(node);
    }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>>adj(V);
        vector<int>ans;
        
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
        }
        
        vector<int>visited(V,0);
        stack<int>st;
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,visited,adj,st);
            }
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};