class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
     
       long long maxi=LLONG_MIN,val=0,i,j,k,n;
       n=nums.size();
        for(i=0;i<n-2;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    val=(1LL*(nums[i]-nums[j])*nums[k]);
                    maxi=max(val,maxi);
                }
            }
        }
        return (maxi<0)?0:maxi;
    }
};