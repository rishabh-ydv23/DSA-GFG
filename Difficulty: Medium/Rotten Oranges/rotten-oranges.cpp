class Solution {
  public:
    int orangesRot(vector<vector<int>>& grid) {
        // code here
        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int, int>> q;
        int fresh = 0;

        // Add all rotten oranges to queue and count fresh oranges
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 2)
                    q.push({i, j});
                else if (grid[i][j] == 1)
                    fresh++;
            }
        }

        if (fresh == 0) return 0;

        int minutes = 0;
        vector<pair<int, int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};

        while (!q.empty() && fresh > 0) {
            int size = q.size();

            while (size--) {
                auto [x, y] = q.front();
                q.pop();

                for (auto &d : dir) {
                    int nx = x + d.first;
                    int ny = y + d.second;

                    if (nx >= 0 && ny >= 0 && nx < rows && ny < cols &&
                        grid[nx][ny] == 1) {

                        grid[nx][ny] = 2;
                        fresh--;
                        q.push({nx, ny});
                    }
                }
            }

            minutes++;
        }

        return fresh == 0 ? minutes : -1;
    }
};