class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src,int dest, int k) 
    {
        vector<int> minC(n, 1e9);
        minC[src] = 0;

        for (int i = 0; i <= k; i++) {
            vector<int> tmp(minC);
            for (auto& x : flights) {
                int node = x[0];
                int next = x[1];
                int wt = x[2];

                if (minC[node] + wt < tmp[next]) {
                    tmp[next] = minC[node] + wt;
                }
            }
            minC = tmp;
        }

        return minC[dest] == 1e9 ? -1 : minC[dest];
    }
};