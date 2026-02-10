class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> st;
        int del = 0;
        for (auto& c : s) {
            if (!st.empty() && st.top()=='b' && c == 'a') 
                {del++; st.pop();}
                else
                st.push(c);
            
        }
       
        return del;
    }
};