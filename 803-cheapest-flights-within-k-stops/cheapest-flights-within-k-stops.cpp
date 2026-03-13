class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dest, int k) {

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        vector<vector<pair<int,int>>> adj(n);

        for(auto &f:flights)
            adj[f[0]].push_back({f[1],f[2]});

        pq.push({0,src,0}); // {cost,node,stops}

        vector<int> stops(n,INT_MAX);

        while(!pq.empty())
        {
            auto it = pq.top();
            pq.pop();

            int cost = it[0];
            int node = it[1];
            int step = it[2];

            if(node == dest) 
                return cost;

            if(step > k || step > stops[node]) 
                continue;

            stops[node] = step;

            for(auto &x : adj[node])
            {
                int next = x.first;
                int price = x.second;

                pq.push({cost + price, next, step + 1});
            }
        }

        return -1;
    }
};