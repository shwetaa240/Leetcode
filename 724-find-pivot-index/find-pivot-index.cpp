class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> sum(n);
        sum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            sum[i]=sum[i-1]+nums[i];
        }
        int piv=-1,l,r,tot=sum[n-1];
        for(int i=0;i<n;i++)
        {
          l = (i == 0) ? 0 : sum[i - 1];
          r=tot-sum[i];
          if(l==r)   
           return i;
         
        }
        return -1;
    }
};