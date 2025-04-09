class Solution {
    public int minOperations(int[] nums, int k) {
        int arr[]=new int[101];
        int c=0;
        for(int i:nums)
        {   
            if(i<k)
            return -1;
            else if(i>k && arr[i]==0)
          {  arr[i]=1;
           c++;
         }
        }


        return c;
    }
}