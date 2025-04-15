class Solution {
public:
    vector<int> asteroidCollision(vector<int>& astd) {
        stack<int> st;
        vector<int> ans;
        int n=astd.size(),i=0;
        while(i<n)
        {   int x=astd[i];
            int f=0;
            while(!st.empty() && st.top()>0 && x<0 )
            {
                if(abs(st.top())>abs(x))
                {i++;
                f=1;
                break;
                }else if(abs(st.top()==abs(x)))
             {   st.pop();
                i++;
                f=1;
                break;
            }
                else
                st.pop();
            }
            if(f==0)
           { if(st.empty() || astd[i]<0 || astd[i]>0)
            st.push(x);
            i++;
          }
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};