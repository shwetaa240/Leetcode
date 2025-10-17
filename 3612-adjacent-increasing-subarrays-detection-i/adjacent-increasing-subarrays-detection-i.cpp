class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> inc(n, 1);

        // Build increasing-length array
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1])
                inc[i] = inc[i - 1] + 1;
        }

        for (int i = k - 1; i + k < n; i++) {
            if (inc[i] >= k && inc[i + k] >= k)
                return true;
        }

        return false;
    }
};
