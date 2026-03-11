class Solution {
public:
 vector<int> p;
        vector<int> rank;
    int find(vector<int> &p, int x) {
        if (p[x] == x)
            return x;
        else
            return p[x] = find(p, p[x]);
    }
    void Union(int x, int y) {
        int px = find(p, x);
        int py = find(p, y);

        if (px == py)
            return;
        if (rank[px] > rank[py])
            p[py] = px;
        else if (rank[px] < rank[py])
            p[px] = py;
        else {
            p[px] = py;
            rank[py]++;
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
       p.resize(n);
       rank.resize(n,0);

       for(int i=0;i<n;i++)
       {
         p[i]=i;
       }
       for(auto &e:edges)
       {
         int u=e[0], v=e[1];
         Union(u,v);
       }

       unordered_map<int,int> mpp;
       for(int i=0;i<n;i++)
       {
         int pi=find(p,i);
         mpp[pi]++;
       }
       long long rem_nodes=n;
       long long res=0;
       for(auto &[v,size]:mpp)
       {
         res+=size*(rem_nodes-size);          
         rem_nodes-=size;
       }
       return res;
    }
};