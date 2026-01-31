class Solution {
public:
    char nextGreatestLetter(vector<char>& le, char t) {
        int l=0,h=le.size()-1;
        char ans=le[0]; // as z will be in last only so any value at zero index will work..! cyclic order 
        while(l<=h)
        {
          int m=(l+h)/2;
          
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