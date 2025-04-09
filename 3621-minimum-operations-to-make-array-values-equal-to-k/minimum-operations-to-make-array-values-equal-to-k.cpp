class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
     set<int> st;
     int i;
     for(auto &i:nums)
     {
        if(i<k)
        return -1;
        if(i>k)
        st.insert(i);
     }
     return st.size();
    }
};