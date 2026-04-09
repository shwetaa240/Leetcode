class Solution {
public:
    vector<string> ans;
    void solve(string cur,string s, int i){

        if(i==s.length()){
            ans.push_back(cur); 
            return;
        }
        
        if(isdigit(s[i])){ 
            cur.push_back(s[i]);
            solve(cur,s,i+1);
        }
        else{ 
            string s1=cur;
            s1.push_back(tolower(s[i]));
            solve(s1,s,i+1);
            
            string s2=cur;
            s2.push_back(toupper(s[i]));
            solve(s2,s,i+1);
        }
    }
    
    vector<string> letterCasePermutation(string S) {
        
        solve("",S,0);
        return ans;
    }
};