class Solution {
  public:
  
    void dfs(vector<int>adj[],stack<int>&st,vector<bool>&visited,int u){
        visited[u]=true;
        //first u ke nodes ko daalenge 
        for(int &v:adj[u]){
            if(!visited[v]){
                dfs(adj,st,visited,v);
            }
        }
        
        st.push(u);
    }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<int>adj[V];
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            
            adj[u].push_back(v);
        }
        
        vector<bool>visited(V,false);
        stack<int>st;
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(adj,st,visited,i);
            }
        }
        
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
    }
};