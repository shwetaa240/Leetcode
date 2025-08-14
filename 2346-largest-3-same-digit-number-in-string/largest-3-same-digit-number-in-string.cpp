class Solution {
public:
    string largestGoodInteger(string num) {
          string cnum="",ans="";
          cnum+=num[0];
          int i;
        for(i=1;i<num.size();i++)
        {
            if(num[i]==num[i-1] && cnum.size()<3)
            { 
               cnum+=num[i];
               if(ans<cnum && cnum.size()==3)
               {
               ans=cnum;
               } 
            }
            else
            {
                cnum=num[i];
            }
        }
        return ans;
    }
};