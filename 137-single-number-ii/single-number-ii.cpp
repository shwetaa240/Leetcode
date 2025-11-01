class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,ones=0,twos=0,n=nums.size();
        
        for(i=0;i<n;i++)
        {
          ones=ones^nums[i]&~twos;
          twos=twos^nums[i]&~ones;
        }
        return ones;
    }
};