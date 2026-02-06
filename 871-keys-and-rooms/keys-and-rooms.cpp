class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        set<int> visit;
        int n=rooms.size();
        dfs(rooms,0,visit);
        if(visit.size()==n)
        return true;
        return false;
    }
    void dfs(vector<vector<int>>&rooms,int node,set<int> &vis)
    {
        vis.insert(node);
        for(auto x:rooms[node])
        {   if(vis.find(x)==vis.end())
            dfs(rooms,x,vis);
        }
    }
};