class Solution {
public:
    int findFinalValue(vector<int>& nums, int org) {
       int i=1;
       while(i)
       {
         if(find(nums.begin(),nums.end(),org)!=nums.end())
         org*=2;
         else
         i=0;
  
       }
       return org;
    }
};