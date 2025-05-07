class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, u = nums.size() - 1, mid;
        while (l < u) {
            mid = (l + u) / 2;
            if( mid-1>=l && nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
            return nums[mid];
           else  if (nums[mid] != nums[mid + 1]) {
                if (mid % 2 == 0) // left
                    u = mid - 1;
                else
                    l = mid + 1;
            } else {
                if (mid % 2 == 0) // right
                    l = mid + 1;
                else
                    u = mid - 1;
            }
        }
        return nums[l];
    }
};