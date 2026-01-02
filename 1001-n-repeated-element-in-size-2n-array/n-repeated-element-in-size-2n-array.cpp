class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> st;
        for(auto i:nums)
        {  
            if(!st.count(i))
            st.insert(i);
            else 
            return i;
        }
        return 0;

    }
};