class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i=0,j=0;
        for(i=0;i<nums.size();i++)
        {
            if(i+1<nums.size() && nums[i]==nums[i+1])
            {nums[i]*=2;
                nums[i+1]=0;
            }
           
        }
        int n=nums.size();
        i=0;
        while(i<n)
        {
            if(nums[i]!=0)
            {
                nums[j++]=nums[i];
            }
            i++;
        }
        while(j<n)
        {
            nums[j]=0;
            j++;
        }
        return nums;
    }
};