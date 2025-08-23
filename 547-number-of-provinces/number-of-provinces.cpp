class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int prov = 0, i, n = isConnected.size();
        vector<int> vis(n, 0);
        for (i = 0; i < n; i++) {
            if (!vis[i]) {
                prov++;
                dfs(i, vis, isConnected, n);
            }
        }
            return prov;

    }
        void dfs(int node, vector<int> &vis, vector<vector<int>>& isConnected, int n) {
            int j;
            vis[node] = 1;
            for (j = 0; j < n; j++) {
                if (isConnected[node][j] == 1 && !vis[j]) {
                 dfs(j, vis, isConnected, n);
                }
            }
        }
    
};