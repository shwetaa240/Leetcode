class Solution {
public:
    int minDays(vector<int>& bloom, int m, int k) {
         int l=*min_element(bloom.begin(),bloom.end()),u=*max_element(bloom.begin(),bloom.end()),n=bloom.size();
         if((long long)m*k>n)
         return -1;
       return calc_days(bloom,m,k,l,u);
    }
    int calc_days(vector<int>&b,int m,int k,int l,int u)
    {
        while(l<=u)
        {
            int mid=l+(u-l)/2;
            if(can_make(b,mid,k)>=m)
            {   
                u=mid-1;
            }
            else
            l=mid+1;
        }
        return l;
    }
    int can_make(vector<int>&b,int day,int k)
    { long long tm=0;
      long long c=0;
      for(int i=0;i<b.size();i++)
      {
        if(b[i]<=day)
        {
            c++;
        }
        else
        {
            tm+=c/k;
            c=0;
        }
         
      }
      tm+=c/k;
      return tm;
    }    
    
};