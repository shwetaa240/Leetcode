class Solution {
public:
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        vector<vector<int>> adj(n + 1);
        
        // Build graph
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> vis(n + 1, false);
        queue<pair<int, double>> q;

        q.push({1, 1.0}); // {node, probability}
        vis[1] = true;

        while (!q.empty() && t--) {
            int size = q.size();

            while (size--) {
                auto [node, prob] = q.front();
                q.pop();

                int children = 0;

                // Count unvisited children
                for (int nei : adj[node]) {
                    if (!vis[nei]) children++;
                }

                // If no children → frog stays
                if (children == 0) {
                    q.push({node, prob});
                    continue;
                }

                // Distribute probability
                for (int nei : adj[node]) {
                    if (!vis[nei]) {
                        vis[nei] = true;
                        q.push({nei, prob / children});
                    }
                }
            }
        }

        // Find target in queue
        while (!q.empty()) {
            auto [node, prob] = q.front();
            q.pop();

            if (node == target) return prob;
        }

        return 0.0;
    }
};