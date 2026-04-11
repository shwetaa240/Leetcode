class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mpp;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            mpp[nums[i]].push_back(i);
        }

        int mini = INT_MAX;

        for (auto &it : mpp) {
            vector<int> &v = it.second;

            if (v.size() < 3) continue;

            for (int i = 0; i < v.size() - 2; i++) {
                int a = v[i];
                int b = v[i+1];
                int c = v[i+2];

                int sum = abs(a - b) + abs(b - c) + abs(c - a);
                mini = min(mini, sum);
            }
        }

        return (mini == INT_MAX ? -1 : mini);
    }
};