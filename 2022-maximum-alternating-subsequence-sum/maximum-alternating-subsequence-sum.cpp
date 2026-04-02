class Solution {
public:
    long long t[100001][2];
    long long maxAlternatingSum(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        return solve(0, 0, nums);
        
    }

    long long solve(int i, int flag, vector<int> &nums) {
        if (i >= nums.size()) return 0;
        if(t[i][flag]!=-1) return t[i][flag];
        // take
        long long take;
        if (!flag)
            take = nums[i]+solve(i+1, 1, nums);
        else
            take = -nums[i]+solve(i+1, 0, nums);

        //skip this
        long long skip = solve(i+1, flag, nums);
        
        return t[i][flag]=max(take, skip);
    }
};