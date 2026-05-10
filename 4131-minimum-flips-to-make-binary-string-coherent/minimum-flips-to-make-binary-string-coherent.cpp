class Solution {
public:
    int minFlips(string s) {
      int one=0,zero=0,n=s.size();
        for(auto x:s)
          {   if(x=='1')
              one++;
          }
        zero=s.size()-one;
        if(s[0]=='1' && s[n-1]=='1') 
        one= one-1;
        if(zero==0 ||one==0) return 0;
        
        return min(zero,one-1);
        
    }
};