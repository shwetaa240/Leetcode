class Solution {
public:
    int shipWithinDays(vector<int>& w, int days) {
       int l=*max_element(w.begin(),w.end()),h=accumulate(w.begin(),w.end(),0),mid,ans=-1;
       while(l<=h)
       {
        mid=l+(h-l)/2;
         if(check(w,mid)<=days)
         {ans=mid;
          h=mid-1;
         }
         else
         {
            l=mid+1;
         }
       } 
       return ans;
    }
    int check(vector<int> w,int cap)
    {
        int d=1,i,s=0;
        for(i=0;i<w.size();i++)
        {
          if(s+w[i]<=cap)
          {
            s+=w[i];
          }
          else
          {
            d++;
            s=w[i];
          }
        }
        return d;
    }
};