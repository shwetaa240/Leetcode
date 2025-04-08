class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int i,j,k,m=grid.size(),n=grid[0].size();
        vector<int> ans;
        for(i=0;i<m;i++)
        {
            if(i%2==0)
            {
                for(j=0;j<n;j+=2)
                {
                    ans.push_back(grid[i][j]);
                }
            }
            else
            {
                if(n%2==1)
                k=n-2;
                else
                k=n-1;
                for(j=k;j>=0;j-=2)
                {
                    ans.push_back(grid[i][j]);
                }
            }
        }
        return ans;
    }
};