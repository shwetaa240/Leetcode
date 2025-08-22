class Solution {
public:

    int numIslands(vector<vector<char>>& grid) {
        int i,j,m=grid.size(),n=grid[0].size(),isl=0;

        for (i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {isl++;
                dfs(grid,i,j,n,m);
                }
            }
        }
        return isl;
    }
    void dfs(vector<vector<char>>&grid,int i,int j,int n,int m)
    {
      if(i<0 || j<0|| i>=m || j>=n || grid[i][j] == '0')
      return;
      grid[i][j]='0';
      dfs(grid,i+1,j,n,m);
      dfs(grid,i-1,j,n,m);
      dfs(grid,i,j+1,n,m);
      dfs(grid,i,j-1,n,m);
    }
};