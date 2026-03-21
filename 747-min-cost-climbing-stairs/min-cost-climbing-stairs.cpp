class Solution {
public:
int dp[1000];
    int minCostClimbingStairs(vector<int>& cost) {
      int n=cost.size();
      memset(dp,-1,sizeof(dp));
      if(n==1) return cost[0];
      if(n==2) return min(cost[0],cost[1]);
      return min(solve(0,n,cost),solve(1,n,cost));

    }
    int solve(int i,int n,vector<int> &cost)
    {
        if(i>=n)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        int a=cost[i]+solve(i+1,n,cost);
        int b=cost[i]+solve(i+2,n,cost);
        return dp[i]=min(a,b);
    }
};