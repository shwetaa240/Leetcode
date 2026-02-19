class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& conn) {
        int ne = conn.size(), nc = 0;
        vector<vector<int>> adj(n);
        vector<int> vis(n, 0);
        if(ne<n-1) return -1;
        for (auto& edge : conn) {
            adj[edge[0]].push_back(edge[1]);
             adj[edge[1]].push_back(edge[0]);
        }

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                nc++;
                dfs(adj, vis, i);
            }
        }
        cout<<nc;

        return nc-1;
    }
    void dfs(vector<vector<int>> &adj,vector<int> &vis,int i)
    {
        vis[i]=1;
        for(auto &x:adj[i])
        { if(!vis[x])
            dfs(adj,vis,x);
        }
    }
};