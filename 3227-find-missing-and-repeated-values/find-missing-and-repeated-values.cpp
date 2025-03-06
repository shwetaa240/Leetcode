class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int i,j,a=0,b=0,n=grid.size();
        vector<int> hash(n*n+1,0);
        for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[0].size();j++)
            {
                hash[grid[i][j]]++;
            }
        }
        // for(auto & row : grid)
        //     for(auto & col : row)
        //         hash[col]++;
        
         for(i=1;i<=n*n;i++)
         {
            if(hash[i]==0)
            b=i;
            if(hash[i]>1)
            a=i;
         }
        //  if(b==0 && hash[n*n]==0)
        //  b=n*n;
         vector<int> ans(2,0);
         ans[0]=a;
         ans[1]=b;
         return ans;
    }
};