class Solution {
public:
    bool isValid(string s) {
       stack<int> st;
       int i,n=s.size();
       char ch;
       for(i=0;i<n;i++)
       {
        if(s[i]=='{'||s[i]=='['||s[i]=='(')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            else if(st.top()=='{' && s[i]=='}')
             st.pop();
            else if(st.top()=='[' && s[i]==']')
             st.pop();
            else if(st.top()=='(' && s[i]==')')
             st.pop();
           else
           return false;
        }
        
       }
       return (st.empty());
    }
};
