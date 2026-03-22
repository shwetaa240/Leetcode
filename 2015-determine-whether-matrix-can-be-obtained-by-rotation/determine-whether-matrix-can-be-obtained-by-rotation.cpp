class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int i;
        for (i = 1; i <= 4; i++) {
            if (mat == target)
                return true;
            rotate(mat);
        }
        return false;
    }

    void rotate(vector<vector<int>>& mat) {

        int n = mat.size(), i, j, r, c;
        vector<vector<int>> temp(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                r = j;
                c = n - 1 - i;
                temp[r][c] = mat[i][j];
            }
        }

        mat = temp;
    }
};