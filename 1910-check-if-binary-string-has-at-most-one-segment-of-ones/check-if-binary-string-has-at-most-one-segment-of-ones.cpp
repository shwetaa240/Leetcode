class Solution {
public:
    bool checkOnesSegment(string s) {
        int i,n=s.size();
        if(n==1) return true;
        for(i=1;i<n;i++)
        {
        if((int)s[i]>int(s[i-1]))
         return false;
        }
        return true;
    }
};