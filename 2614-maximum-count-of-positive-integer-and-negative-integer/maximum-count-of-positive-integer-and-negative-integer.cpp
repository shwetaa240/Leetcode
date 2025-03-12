class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = 0, pos = 0,n=nums.size(),e=n-1,s=0;
        while(s<=e)
        {
            if(nums[s]>0 && s!=e)
            pos++;
            if(nums[s]<0 && s!=e)
            neg++;
            if(nums[e]<0)
            neg++;
            if(nums[e]>0)
            pos++;
            s++;
            e--;
        }
     return max(pos,neg);
    }

};