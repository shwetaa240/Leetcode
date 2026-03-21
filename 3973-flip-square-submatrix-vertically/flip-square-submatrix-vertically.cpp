class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int m = grid.size(), n = grid[0].size();

        if (x + k > m || y + k > n) return grid;

        for (int i = y; i < y + k; i++) {
            int s = x;
            int e = x + k - 1;

            while (s < e) {
                swap(grid[s][i], grid[e][i]);
                s++;
                e--;
            }
        }
        return grid;
    }
};