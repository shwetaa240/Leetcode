class Solution {
    public boolean check(int[] nums) {
        int i,c=0;
        for(i=1;i<nums.length;i++)
        {
          if(nums[i-1]>nums[i])
          c++;
        }
        if(c==0 || c==1 && nums[nums.length-1]<=nums[0])
        return true;
        return false;
    }
}