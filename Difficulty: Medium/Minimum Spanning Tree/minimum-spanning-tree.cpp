class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int,int>>>adj(V);
        
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            int wt=edge[2];
            
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>vis(V,0);
        int sum=0;
        
        pq.push({0,0});     //weight Node
        
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            
            int wt=it.first;
            int node=it.second;
            
            if(vis[node]==1) continue;
            
            vis[node]=1;
            sum+=wt;
            
            for(auto it:adj[node]){
                int adjNode=it.first;
                int edgewt=it.second;
                
                if(!vis[adjNode]){
                    pq.push({edgewt,adjNode});
                }
            }
        }
        return sum;
    }
};