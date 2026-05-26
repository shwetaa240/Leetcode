class Solution {
    public int minimumSwaps(int[] nums) {
        int c1=0;
        int n=nums.length;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c1++;
            }
        }
        int c2=0;
        for(int i=0;i<n-c1;i++){
            if(nums[i]==0){
                c2++;
            }
        }
        return c2;
    }
}