class Solution {
public:
    typedef pair<int,int> p;

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        vector<vector<pair<int,int>>> adj(n+1);

        for(auto &t:times)
        {
            int u=t[0];
            int v=t[1];
            int w=t[2];

            adj[u].push_back({v,w});
        }

        priority_queue<p,vector<p>,greater<p>> pq;

        vector<int> result(n+1,INT_MAX);

        pq.push({0,k});
        result[k]=0;

        while(!pq.empty())
        {
            int dist=pq.top().first;
            int node=pq.top().second;
            pq.pop();

            for(auto &it:adj[node])
            {
                int adjNode=it.first;
                int wt=it.second;

                if(dist+wt < result[adjNode])
                {
                    result[adjNode]=dist+wt;
                    pq.push({result[adjNode],adjNode});
                }
            }
        }

        int ans=0;

        for(int i=1;i<=n;i++)
        {
            if(result[i]==INT_MAX)
                return -1;

            ans=max(ans,result[i]);
        }

        return ans;
    }
};