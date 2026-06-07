class Solution {
public:
int palin(string s,int i,int j)
{
   while(i<j)
   {
    if(s[i]!=s[j])
    return false;
    i++;
    j--;
   }
  return true;
}
    int countSubstrings(string s) {
       int i=0,j=0,c=0,n=s.size();
       for(i=0;i<n;i++)
       {
        for(j=i;j<n;j++)
          {
            if(palin(s,i,j))
            {
              c++;
            }
          } 
        
        }
       return c;
    }
};

