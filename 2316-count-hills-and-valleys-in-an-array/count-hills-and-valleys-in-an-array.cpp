class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int c = 0, i=1, l, r,n=nums.size();
        for (int i = 1; i < n - 1; i++) {
//skip the duplicates
 if (nums[i] == nums[i - 1]) continue;

            l = i - 1;
            r = i + 1;
            // find the closest neighbor which is non equal
            while (l >= 0 && nums[i] == nums[l])
                l--;
            while (r < n && nums[i] == nums[r])
                r++;

            // now check if it is hill or valley
            if (l>= 0 && r < n) { //if there are valid neighbors [1,1,2,3]
                if ((nums[l] > nums[i] && nums[i] < nums[r]) ||
                    (nums[l] < nums[i] && nums[i] > nums[r]))
                    c++;
            }
        
        }
        return c;
    }
};