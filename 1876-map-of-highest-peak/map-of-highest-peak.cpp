class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        queue<pair<int,int>> q;
        vector<vector<int>> vis(m, vector<int>(n, 0));
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) {
                    q.push({i, j});
                    vis[i][j] = 0;
                }
                else {
                    vis[i][j]=-1;
                }
            }
        }
        
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        
        while(!q.empty()) {
            
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
            
            for(int i = 0; i < 4; i++) {
                
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                
                if(nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && vis[nrow][ncol] == -1) { 
                    q.push({nrow, ncol});
                    vis[nrow][ncol] = vis[r][c]+1;
                }
            }
        }
        
        
        return vis;
    }
};