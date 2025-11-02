class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,n=nums.size();
   sort(nums.begin(),nums.end());
   for(i=0;i+2<n;i+=3)
   {
    if(nums[i]!=nums[i+2])
    return nums[i];
   }
   return nums[n-1];
    }
};