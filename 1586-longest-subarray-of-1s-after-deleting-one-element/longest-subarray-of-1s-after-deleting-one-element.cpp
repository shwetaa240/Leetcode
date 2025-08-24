class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0, zeros = 0, ans = 0;

        for (int right = 0; right < n; right++) {
            if (nums[right] == 0) zeros++;
            // shrink window if more than one zero
            while (zeros > 1) {
                if (nums[left] == 0) zeros--;
                left++;
            }

            // window size minus 1 (delete one element)
            ans = max(ans, right - left);
        }

        return ans;
    }
};
