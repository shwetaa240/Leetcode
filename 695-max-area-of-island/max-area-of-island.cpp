class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid[0].size(),m=grid.size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        int i,j,maxl=0,isl=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(vis[i][j]==0 && grid[i][j]==1)
                {
                  isl=dfs(vis,grid,i,j);
                  maxl=max(isl,maxl);
                }
            }
        
        }
         return maxl;
        }
        int dfs(vector<vector<int>> &vis,vector<vector<int>> &grid,int i,int j)
        {
            if(i>=grid.size() || i<0 || j<0 || j>=grid[0].size() || grid[i][j]==0 || vis[i][j])
            return 0;
            vis[i][j]=1;
           return 1+ dfs(vis,grid,i+1,j)+ dfs(vis,grid,i-1,j)+dfs(vis,grid,i,j+1)+dfs(vis,grid,i,j-1);    
        }
};