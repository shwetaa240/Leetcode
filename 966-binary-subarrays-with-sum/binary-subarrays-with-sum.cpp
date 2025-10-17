class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        unordered_map<int, int> premap; 
        premap[0] = 1; 
        int sum = 0, ans = 0;

        for (int num : nums) {
            sum += num;                 // running prefix sum
            if (premap.find(sum - k) != premap.end())
                ans += premap[sum - k];
            premap[sum]++;              
        }

        return ans;
    }
};