class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int smax=0,maxx=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxx){
            smax=maxx;
            maxx=nums[i];
            }
            else if(smax<nums[i])
        {
            smax=nums[i];
        }

        }

        return (smax-1)*(maxx-1);
    }
};