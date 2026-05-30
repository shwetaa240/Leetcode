class Solution {
public:
    int longestConsecutive(vector<int>& nums) {     
        int i,len=1,longest=1,prev; 
        if(nums.size()<=1)
        return nums.size();      
        sort(nums.begin(),nums.end());
        prev=nums[0];
        for(i=1;i<nums.size();i++)
        {

            if(nums[i]==prev) continue;
            else if(nums[i]==prev+1)
            {
                len++;
            }
            else
            {
               len=1;
            }
             prev=nums[i];
             longest=max(len,longest);
        }
        return longest;
    }
};