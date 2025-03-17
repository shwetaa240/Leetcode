class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int ans = 0,i;
        sort(nums.begin(), nums.end());
        for (i = 0; i < nums.size(); i+=2) {
           ans=nums[i]^nums[i+1];
           if(ans!=0)
           return false;
        }
        return true;
    }
};