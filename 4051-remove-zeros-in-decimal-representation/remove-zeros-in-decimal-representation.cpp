class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='0') res+=s[i];
        }
        long long ans=stoll(res);
        return ans;
        
    }
};