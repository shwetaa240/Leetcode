class Solution {
public:
    int numberOfSubstrings(string s) {
      int i=0,n=s.size(),c=0;
       int lseen[3]={-1,-1,-1};
      for(i=0;i<n;i++)
      {
        lseen[s[i]-'a']=i;
          if(lseen[0]!=-1 && lseen[1]!=-1 && lseen[2]!=-1)
          {
           c+=(1+min(min(lseen[0],lseen[1]),lseen[2]));
          }
        
      }
      return c;
    }
};