class Solution {
public:
    char nextGreatestLetter(vector<char>& le, char t) {
        int l=0,h=le.size()-1;
        char ans=le[0];
        // int y=(int)t=='z'?0:(int)t;
        while(l<=h)
        {
          int m=(l+h)/2;
        //   x=le[m]=='z'?0:(int)le[m];
          
          if((int)t<(int)le[m])
          {
            ans=le[m];
            h=m-1;
          }
          else
          {
            l=m+1;
          }
        }
        return ans;
    }
};