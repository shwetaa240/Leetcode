class Solution {
public:
    int longestConsecutive(vector<int>& nums) {     
        int i,len=0,longest=0,prev=INT_MIN; 
        if(nums.size()<=1)
        return nums.size();      
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==prev)
            continue;
            else if(nums[i]==prev+1)
            {
                len++;
                prev=nums[i];
            }
            else
            {
                len=1;
                prev=nums[i];
               
            }
             longest=max(len,longest);
        }
        return longest;
    }
};