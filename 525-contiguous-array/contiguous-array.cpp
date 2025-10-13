class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int n=nums.size(),i;
       vector<int> sum(n); 
       unordered_map<int,int> premap;
        premap[0] = -1;  
       int ans=0,j;
       for(i=0;i<n;i++)
       {
        if(!nums[i])
        nums[i]=-1;
       }
       sum[0]=nums[0];
       premap[sum[0]]=0;
    //    cout<<nums[0];
       for(i=1;i<n;i++)
       {
        sum[i]=sum[i-1]+nums[i];
        if(premap.find(sum[i])==premap.end())
        premap[sum[i]]=i;
       else
       {
        j=premap[sum[i]];
        ans=max(ans,i-j);
       }
       }
       return ans;
    }
};