class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,u=nums.size()-1,mid;
        while(l<u)
        {  mid=(l+u)/2;
            if(nums[mid]>nums[u])
            {
              l=mid+1;
            }
            else
            u=mid;
        }
        return nums[u];
    }
};