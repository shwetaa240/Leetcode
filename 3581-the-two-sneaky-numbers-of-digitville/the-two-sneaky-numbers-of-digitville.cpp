class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int i,n=nums.size(),g1=0,g2=0;
        long long xorr=0,rightmost;
        for(i=0;i<n;i++)
        {
            xorr^=nums[i];
        }  
        for(i=0;i<n-2;i++)
        xorr^=i;

        rightmost=xorr&(-xorr);
          for(i=0;i<n;i++){
            if(nums[i]& rightmost)
            g1^=nums[i];
            else
            g2^=nums[i];
        }
            for(i=0;i<n-2;i++){
            if(i&rightmost)
            g1^=i;
            else
            g2^=i;
        }
       return {g1,g2};
    }
};
