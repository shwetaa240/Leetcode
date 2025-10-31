class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size(),i,f=0;
        sort(nums.begin(),nums.end());
        for(i=1;i<n;i++){
            if(nums[i]==nums[i-1])
            break;
        }
       return nums[i];
    }
};