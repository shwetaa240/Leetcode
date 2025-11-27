class Solution
{
public:
    long maxSubarraySum(vector<int>& nums, int k)
    {
        int n = nums.size();

        vector<long> prefixSum(n + 1, 0);
        for (int i = 0; i < n; ++i) 
        {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }

        vector<long> minPrefixSum(k, LLONG_MAX);

        long maxSum = LLONG_MIN;

        for (int i = 0; i <= n; ++i) 
        {
            int remainder = i % k;

            if (i >= k) 
            {
                maxSum = max(maxSum, prefixSum[i] - minPrefixSum[remainder]);
            }

            minPrefixSum[remainder] = min(minPrefixSum[remainder], prefixSum[i]);
        }

        return maxSum == LLONG_MIN ? 0 : maxSum;
    }
};