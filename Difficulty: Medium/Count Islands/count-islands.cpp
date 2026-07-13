class Solution {
  public:
  
  int n,m;
  
    void dfs(vector<vector<char>>& grid, int row,int col){
        if(row < 0 || row >= n || col < 0 || col >= m || grid[row][col] != 'L'){
            return;
        }
        
        grid[row][col]='W';
        
        dfs(grid,row+1,col);
        dfs(grid,row-1,col);
        dfs(grid,row,col+1);
        dfs(grid,row,col-1);
        
        dfs(grid,row-1,col-1);
        dfs(grid,row+1,col+1);
        dfs(grid,row+1,col-1);
        dfs(grid,row-1,col+1);
    }
    
    int countIslands(vector<vector<char>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='L'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
};