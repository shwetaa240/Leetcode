class Solution {
public:
    int minPairSum(vector<int>& nums) {
       int s,e,ans=0,n=nums.size();
        sort(nums.begin(),nums.end());
        s=0;
        e=n-1;
        while(s<=e)
        {
          ans=max(ans,nums[s]+nums[e]);
          s++;
          e--;
        }
        return ans;
    }
};