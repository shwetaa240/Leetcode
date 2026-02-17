class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        // Boudnary dfs
        int i, j, n = grid[0].size(), m = grid.size(), cnt = 0;
        vector<vector<int>> vis(m, vector<int>(n, 0));
        for (i = 0; i < m; i++) // checking for the first AND LAST column
        {
            if (!vis[i][0] && grid[i][0] == 1) {
                dfs(grid, vis, i, 0);
            }
            if (!vis[i][n - 1] && grid[i][n - 1] == 1) {
                dfs(grid, vis, i, n - 1);
            }
        }
        for (j = 0; j < n; j++) // checking for the first AND LAST column
        {
            if (!vis[0][j] && grid[0][j] == 1) {
                dfs(grid, vis, 0, j);
            }
            if (!vis[m - 1][j] && grid[m - 1][j] == 1) {
                dfs(grid, vis, m - 1, j);
            }
        }

        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if (!vis[i][j] && grid[i][j] == 1)
                    cnt++;
            }
        }
        return cnt;
    }
    void dfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int i,int j) {
        int m = grid.size(), n = grid[0].size();
        vector<int> row = {0, 1, 0, -1};
        vector<int> col = {1, 0, -1, 0};
        if (i >= m || j >= n || j < 0 || i < 0 || vis[i][j] || grid[i][j] == 0)
            return;
       
       vis[i][j]=1;

       for(int k=0;k<4;k++)
       {
         int nrow=i+row[k];
         int ncol=j+col[k];
         if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==1 && vis[nrow][ncol]==0)
         dfs(grid,vis,nrow,ncol);
       }

    }
};