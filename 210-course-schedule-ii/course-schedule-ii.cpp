class Solution {
public:

    bool dfs(int node, vector<vector<int>>& adj,
             vector<int>& vis, vector<int>& inRec,
             stack<int>& st) {

        vis[node] = 1;
        inRec[node] = 1;

        for(int neigh : adj[node]) {

            if(!vis[neigh]) {
                if(!dfs(neigh, adj, vis, inRec, st))
                    return false;
            }
            else if(inRec[neigh]) {
                return false; // cycle
            }
        }

        inRec[node] = 0;
        st.push(node);

        return true;
    }

    vector<int> findOrder(int num, vector<vector<int>>& pre) {

        vector<vector<int>> adj(num);
        for(auto &p : pre)
            adj[p[1]].push_back(p[0]);

        vector<int> vis(num, 0);
        vector<int> inRec(num, 0);
        stack<int> st;

        for(int i = 0; i < num; i++) {
            if(!vis[i]) {
                if(!dfs(i, adj, vis, inRec, st))
                    return {};
            }
        }

        vector<int> ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};
