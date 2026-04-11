class Solution {
public:
    double dfs(int node, int parent, int t, int target, vector<vector<int>>& adj) {
        
        // If time is over
        if (t == 0) {
            return (node == target) ? 1.0 : 0.0;
        }

        int children = 0;
        for (int nei : adj[node]) {
            if (nei != parent) children++;
        }

        // If no children (leaf node)
        if (children == 0) {
            return (node == target) ? 1.0 : 0.0;
        }

        double prob = 0.0;

        for (int nei : adj[node]) {
            if (nei == parent) continue;

            prob += dfs(nei, node, t - 1, target, adj) / children;
        }

        return prob;
    }

    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        vector<vector<int>> adj(n + 1);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        return dfs(1, -1, t, target, adj);
    }
};