class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int i=0,n=temp.size();
        vector<int> ans(n,0);
        stack<int> st;

        for(i=n-1;i>=0;i--)
        {
         while(!st.empty() && temp[st.top()]<=temp[i])
         st.pop();
        //  if(st.empty() ||!st.empty() && temp[i]>temp[st.top()])
         int d=0;
         if(st.empty())
         d=0;
         else
         d=abs(i-st.top());
         ans[i]=d;
         st.push(i);
        }
        return ans;
    }
};