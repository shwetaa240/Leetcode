class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        int i, prev = -1;
        for (i = 0; i < nums.size(); i++) {
            
                if (n>0 && (prev == 0 || prev==-1) && nums[i] == 0) {
                    nums[i] = 1;
                    n--;
                } else if (prev == 1 && nums[i] == 1)
                    {nums[i-1]=0; n++;}
             
            prev = nums[i];
        }
        if (n > 0)
            return false;
        else
          return true;
    }
};