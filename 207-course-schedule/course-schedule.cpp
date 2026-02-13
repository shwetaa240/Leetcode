class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& pre) {
        vector<vector<int>> adj(num);
        vector<int> vis(num,0);
        vector<int> inRec(num,0);
        int i;
        for(i=0;i<pre.size();i++)
        {   int u=pre[i][0];
            int v=pre[i][1];
            adj[v].push_back(u);
        }
        for(int i=0;i<num;i++)
        {
            if(vis[i]==0 && hasCycle(adj,i,inRec,vis))
            return false;
        }
        return true;
        
    }
    bool hasCycle(vector<vector<int>> &adj,int i,vector<int> &vis,vector<int> &inRec)
    {
        inRec[i]=1;
        vis[i]=1;
        for(auto x:adj[i])
        {
          if(!vis[x] && hasCycle(adj,x,vis,inRec))
          return true;
          if(inRec[x])
          return true;
        }
        inRec[i]=0;
        return false;
    }
};