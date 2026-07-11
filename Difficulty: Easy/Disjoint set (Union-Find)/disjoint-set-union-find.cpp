class Solution {
  public:
    
        int find(int i,vector<int>&parent){
            if(i==parent[i]) return i;
            
            return find(parent[i],parent);
        }
        
        void unionn(int x,int y,vector<int>&parent){
            int x_parent=find(x,parent);
            int y_parent=find(y,parent);
            
            if(x_parent != y_parent){
                parent[x_parent]=y_parent;
            }
        }
        
  
    vector<int> DSU(int n, vector<vector<int>>& queries) {
        
        vector<int>ans;
        vector<int>parent(n+1);
        for(int i=1;i<=n;i++){
            parent[i]=i;
        }
        

        for(auto &query:queries){
            if(query[0]==1){
                int x=query[1];
                int y=query[2];
                
                unionn(x,y,parent);
            }else{
                int x=query[1];
                int anss=find(x,parent);
                ans.push_back(anss);
            }
        }
        return ans;
    }
};