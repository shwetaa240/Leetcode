class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int i,n=nums.size();
        vector<int> ans(n);
        stack<int> st;
  
        for(i=2*n-1;i>=0;i--)
        {  int ind=i%n;
           
               while(!st.empty() && st.top()<=nums[ind])
               st.pop();
               if(i<n)
               ans[i]=st.empty()?-1:st.top();
               st.push(nums[ind]);
        }
        return ans;
    }
};