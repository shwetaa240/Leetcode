class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(), p = 0,ne=0;
        vector<int> ans(n);
        for (int i = 0; i < n ; i++) {
            if (nums[i] > 0) {
                ans[2 * p] = nums[i];
                p++;
            }
              if (nums[i] < 0 ) {
                ans[2 * ne+ 1] = nums[i];
                ne++;
            }
        }
      
        return ans;
    }
};