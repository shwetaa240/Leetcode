class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> st;
        int cnt=0,l=0,u=0;
        for(char c:word)
        {   c=tolower(c); l=0,u=0;
            for(char ch:word){
               if(c==ch) l++;
               if(toupper(c)==ch) u++;
            }
           // if(st.count(tolower(c)) || st.count(toupper(c)))
            // cnt++;
            // else
            // st.insert(tolower(c));
        
        if(l>0 && u>0)
        st.insert(c);
        }
    
        return st.size();
    }

};