class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int> mpp;
        int i=0,c=0;
        for(auto &i:nums)
        {
           mpp[i]++;
        }
        for(i=0;i<nums.size();i++)
        {
            if(mpp.find(nums[i]+diff)!=mpp.end() && mpp.find(nums[i]+diff*2)!=mpp.end())
            c++;
        }
        return c;
    }
};