class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int m,i,n=nums.size();
        long long ans=0;
        sort(nums.begin(),nums.end(),[](int a,int b){
            return abs(a)<abs(b);
        });
        m=n/2;
        for(i=0;i<n;i++)
    {
         if(i<m)
         ans-=pow(nums[i],2);
         else
         ans+=pow(nums[i],2);
    }
      return ans;

    }
};