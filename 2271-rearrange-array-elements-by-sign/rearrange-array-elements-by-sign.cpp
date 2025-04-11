class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(), k = 0;
        vector<int> ans(n);
        for (int i = 0; i < n ; i++) {
            if (nums[i] > 0) {
                ans[2 * k] = nums[i];
                k++;
            }
        }
        k = 0;
        for (int i = 0; i < n ; i++) {
            if (nums[i] < 0) {
                ans[2 * k + 1] = nums[i];
                k++;
            }
        }
        return ans;
    }
};