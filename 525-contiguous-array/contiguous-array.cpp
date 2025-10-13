class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> premap;
        premap[0] = -1;  
        int sum = 0, ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] == 0 ? -1 : 1);

            if (premap.find(sum) != premap.end()) {
                ans = max(ans, i - premap[sum]);
            } else {
                premap[sum] = i;  // store first occurrence only
            }
        }

        return ans;
    }
};
