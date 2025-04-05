class Solution {
public:       //Shweta Srivastava
    int sum = 0;
    int subsetXORSum(vector<int>& nums) {
        int currxor = 0;
        solve(nums, 0, 0);
        return sum;
    }
    void solve(vector<int>& nums, int i, int currxor) {
        int n = nums.size();
        if (i > n)
            return;
        if (i == n) {
            sum += currxor;
            return;
        }
        solve(nums, i + 1, currxor ^ nums[i]);  //take
        solve(nums, i + 1, currxor);            //not take

    }
};