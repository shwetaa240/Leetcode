class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i, j, n = nums.size(), prev = -1, x, max_l = 0, sum = 0;
        if(nums[0]==0 && n==1)
        return 0;
        j = 0;
        while (j < n) {
            if (nums[j] == 0 && j!=prev) {
                if (prev == -1)
                    prev = j;
                else {
                    x = j;
                    j = prev + 1; // from 0's prev+1 position
                    prev = x;     // new position for 0
                    sum = 0;
                    continue;
                }
            }
            sum += nums[j];
            max_l = max(max_l, sum);
            j++;
        }
        return (prev==-1)?max_l-1:max_l;
    }
};
