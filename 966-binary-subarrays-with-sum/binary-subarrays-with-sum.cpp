class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }

private:
    int atMost(vector<int>& nums, int k) {
        if (k < 0) return 0; // edge case: no valid subarrays
        int l = 0, r = 0, sum = 0, count = 0;
        int n = nums.size();

        while (r < n) {
            sum += nums[r];

            // shrink window if sum > k
            while (sum > k) {
                sum -= nums[l];
                l++;
            }

            // add all subarrays ending at r with sum ≤ k
            count += (r - l + 1);
            r++;
        }

        return count;
    }
};
