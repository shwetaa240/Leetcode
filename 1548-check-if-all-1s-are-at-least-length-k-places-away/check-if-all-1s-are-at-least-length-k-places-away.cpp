class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
      int i=0,prev=-1,n=nums.size();
      for(i=0;i<n;i++)
      {
         if(nums[i]==1 && (prev==-1 || (i-prev-1)>=k)) 
         prev=i;
         else if(nums[i]==1 && (i-prev-1)<k)
         return false;
         
      } 
      return true; 
    }
};