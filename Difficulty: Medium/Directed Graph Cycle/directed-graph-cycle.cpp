class Solution {
public:

    bool dfs(int node,
             vector<int> adj[],
             vector<bool> &visited,
             vector<bool> &inRecursion) {

        visited[node] = true;
        inRecursion[node] = true;

        for(int &neighbour : adj[node]) {

            if(!visited[neighbour]) {

                if(dfs(neighbour, adj, visited, inRecursion)) {
                    return true;
                }
            }
            else if(inRecursion[neighbour]) {
                return true;
            }
        }

        inRecursion[node] = false;

        return false;
    }

    bool isCyclic(int V, vector<vector<int>> &edges) {

        // adjacency list
        vector<int> adj[V];

        // edge list -> adjacency list
        for(auto &edge : edges) {

            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
        }

        vector<bool> visited(V, false);
        vector<bool> inRecursion(V, false);

        for(int i = 0; i < V; i++) {

            if(!visited[i]) {

                if(dfs(i, adj, visited, inRecursion)) {
                    return true;
                }
            }
        }

        return false;
    }
};