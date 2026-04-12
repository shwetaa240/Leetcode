class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size(), maxi = 0, size = INT_MAX;
        unordered_map<int, pair<int,int>> mpp;

        for(int i = 0; i < n; i++) {
            if(mpp.find(nums[i]) == mpp.end()) {
                mpp[nums[i]] = {0, i}; // freq = 0, first index = i
            }

            mpp[nums[i]].first++; // increase freq

            if(maxi < mpp[nums[i]].first) {
                maxi = mpp[nums[i]].first;
                size = i - mpp[nums[i]].second + 1;
            }
            else if(maxi == mpp[nums[i]].first) {
                size = min(size, i - mpp[nums[i]].second + 1);
            }
        }

        return size;
    }
};