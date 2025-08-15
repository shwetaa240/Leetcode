class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edge, int source, int dest) {
        int i;
        vector<vector<int>> adj(n);
        for (i = 0; i < edge.size(); i++) {
            adj[edge[i][0]].push_back(edge[i][1]);
            adj[edge[i][1]].push_back(edge[i][0]);
        }

        vector<int> vis(n, 0);
        return dfs(source, dest, adj, vis);
    }
    bool dfs(int node, int d, vector<vector<int>> &adj, vector<int>& vis) {
        if (node == d)
            return true;
        vis[node] = 1;
        for (auto& i : adj[node]) {
            if (!vis[i])
                if (dfs(i, d, adj, vis))
                    return true;
        }
        return false;
    }
};