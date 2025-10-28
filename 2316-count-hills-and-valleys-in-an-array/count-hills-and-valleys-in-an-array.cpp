class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int c = 0, i=1, l, r,n=nums.size();
        while(i<n-1) {
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
            i=r;
        }
        return c;
    }
};