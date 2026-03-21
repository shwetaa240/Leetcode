class Solution {
public:
    int dp[100];
    int rob(vector<int>& nums) {
int n=nums.size();
if(n==1) return nums[0];
memset(dp,-1,sizeof(dp));

int ze_ind=solve(0,n-1,nums); //0 th
memset(dp,-1,sizeof(dp));
int fi_ind=solve(1,n,nums); //1st

return max(ze_ind,fi_ind);

    }
    int solve(int i,int n,vector<int>&nums){
     if(i>=n) return 0;
     if(dp[i]!=-1) return dp[i];
int steal=nums[i]+solve(i+2,n,nums);
int skip=solve(i+1,n,nums);

return dp[i]= max(steal,skip);

    }
};