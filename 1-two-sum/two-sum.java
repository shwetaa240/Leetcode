class Solution {
    public int[] twoSum(int[] nums, int target) {
        // ArrayList<Integer> arr=new ArrayList<>();
        HashMap<Integer,Integer> mpp=new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            int need=target-nums[i];
            if(mpp.containsKey(need))
            {
                return new int[]{i,mpp.get(need)};
            }
            mpp.put(nums[i],i);
        }
        return new int[]{};
    }
}