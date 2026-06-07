class Solution {
public:
    int solveMem(string& s, int i, int j, vector<vector<int>>& dp) {
    if (i >= j) return 1;           
    if (dp[i][j] != -1) return dp[i][j]; 
    if (s[i] != s[j]) return dp[i][j] = 0; 
    return dp[i][j] = solveMem(s, i + 1, j - 1, dp); 
}

int countSubstrings(string s) {
    int n = s.size(), cnt = 0;
    vector<vector<int>> dp(n, vector<int>(n, -1));
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            cnt += solveMem(s, i, j, dp);
    return cnt;
}
};