class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int st) {
        int i,n=nums.size(),ans=INT_MAX;
        for(i=0;i<n;i++)
        {
            if(nums[i]==target)
            ans=min(abs(i-st),ans);
        }
        return ans;
    }
};