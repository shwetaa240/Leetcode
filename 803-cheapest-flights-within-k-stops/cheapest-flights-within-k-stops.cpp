class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dest, int k) {

        queue<vector<int>> q; // {stops,node,cost}

        vector<vector<pair<int,int>>> adj(n);

        for(auto &f:flights)
            adj[f[0]].push_back({f[1],f[2]});

        q.push({0,src,0}); 

        vector<int> minC(n,1e9);
        minC[src]=0;

        while(!q.empty())
        {
            auto it = q.front();
            q.pop();

            int stops = it[0];
            int node  = it[1];
            int cost  = it[2];

            if(stops > k) continue;

            for(auto &x : adj[node])
            {
                int next = x.first;
                int price = x.second;

                if(cost + price < minC[next])
                {
                    minC[next] = cost + price;
                    q.push({stops+1, next, minC[next]});
                }
            }
        }

        return minC[dest]==1e9 ? -1 : minC[dest];
    }
};