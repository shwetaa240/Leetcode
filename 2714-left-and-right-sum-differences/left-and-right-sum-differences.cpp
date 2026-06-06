class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int i,n=nums.size();
        vector<int> leftSum(n,0),rightSum(n,0),ans(n,0);
        
        for(i=1;i<n;i++)
        {
           leftSum[i]=leftSum[i-1]+nums[i-1];
        }
        for(i=n-2;i>=0;i--)
        {   
            rightSum[i]=rightSum[i+1]+nums[i+1];
            ans[i]=abs(leftSum[i]-rightSum[i]);
        }
        ans[n-1]=abs(leftSum[n-1]-rightSum[n-1]);
         return ans;
    }
};