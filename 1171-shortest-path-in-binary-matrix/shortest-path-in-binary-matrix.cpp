class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int ans = 0;
        int m = grid.size(), n = grid[0].size();
        if (m == 0 || n == 0 || grid[0][0] == 1  || grid[m-1][n-1]==1)
            return -1;
 
auto unSafe=[&](int x,int y){
  return (x<0 || x>=m || y>=n || y<0 );
};

        q.push({0, 0});
        grid[0][0] = 1;
        vector<vector<int>> dir{{0, -1}, {0, 1},  {1, 1},  {-1, -1},
                                {-1, 1}, {1, -1}, {-1, 0}, {1, 0}};

        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                int r = q.front().first;
                int c = q.front().second;
                q.pop();

                if (r == m - 1 && c == n - 1)
                    return ans + 1;

                for (auto& d : dir) {
                    int x = r + d[0];
                    int y = c + d[1];
                    if (!unSafe(x, y) && grid[x][y] == 0) {
                        q.push({x, y});
                        grid[x][y]=1;  //visited marked
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};