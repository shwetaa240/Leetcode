class Solution {
public:
    int numSub(string s) {
       int c=0,m=1e9+7,ans=0;
       for(auto ch:s) 
       {
        if(ch=='1')
        {
            c++;
            ans=(ans+c)%m;
        }
        else
        {
         c=0;
        }
       }
       return ans;
    }
};