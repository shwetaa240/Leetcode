class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int curr_min=nums[0],i=0,n=nums.size();
        stack<pair<int,int>> st;
        for(i=1;i<n;i++)
        {   while(!st.empty() && st.top().first<=nums[i])
            {
                st.pop();
            }
            if(st.empty()==false && st.top().second<nums[i])
            return true;
            st.push({nums[i],curr_min});
            curr_min=min(curr_min,nums[i]);
        }
        return false;
    }
};