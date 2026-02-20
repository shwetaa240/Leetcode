class Solution {
public:
    bool isBipartite(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int> color(n,-1);
        
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1 && !dfs(adj,color,i,0))
            {
                return false;
            }
        }
        return true;
    }
    bool dfs(vector<vector<int>> &adj,vector<int> &color,int i,int col)
    {
        color[i]=col;
        for(auto &x:adj[i])
        {
            if(color[x]==-1 && !dfs(adj,color,x,!col))
            return false;
            if(color[i]==color[x])
            return false;
        }
        return true;
    }
};