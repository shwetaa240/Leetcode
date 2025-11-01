class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int i,n=nums.size(),g1=0,g2=0;
        long long xorr=0;
        for(i=0;i<n;i++)
        {
            xorr^=nums[i];
        }  
        int rightmost=xorr&(-xorr);
          for(i=0;i<n;i++){
            if(nums[i]& rightmost)
            g1^=nums[i];
            else
            g2^=nums[i];
        }
       return {g1,g2};
    }
};