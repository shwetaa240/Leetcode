// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
      int l=1,u=n,m,ans;
      while(l<=u)
      {
       m=l+(u-l)/2;
       if(isBadVersion(m))
       {
        ans=m;
        u=m-1;
       }
       else
       {
        l=m+1;
       }
      } 
      return ans; 
    }
};