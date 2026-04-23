class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0, j = 0, n = nums.size();
        vector<int> ans;
        vector<int> dp(n, 1);
        vector<int> prev(n,-1);
        int last = 0;
        int maxi = 1;

        for (i = 0; i < n; i++) {
            for (j = 0; j < i; j++) {
                if (nums[i] % nums[j] == 0) {
                    if(dp[i]<dp[j]+1)
                    {
                        dp[i]=dp[j]+1;
                        prev[i]=j;
                    }
                }
            }
            if(maxi<dp[i])
            {
                maxi=dp[i];
               last=i; 

            }

        }
     
      while(last>=0)
      {
        ans.push_back(nums[last]);
        last=prev[last];

      }
       return ans;
    }
};

