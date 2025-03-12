class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int i, neg = 0, pos = 0,n=nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i]>0)
            pos++;
            if(nums[i]<0)
            neg++;
        }
     return max(pos,neg);
    }

};