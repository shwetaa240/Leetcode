class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,u=*max_element(piles.begin(),piles.end());
       return calc_speed(piles,h,l,u);
    }
    int calc_speed(vector<int>&p,int hr,int l,int u)
    {
        while(l<=u)
        {
            int m=l+(u-l)/2;
            if(can_eat(p,m,hr))
            {
                u=m-1;
            }
            else
            l=m+1;
        }
        return l;
    }
    bool can_eat(vector<int>&p,int h,int hr)
    { long long th=0;
      for(int i=0;i<p.size();i++)
      {
         th+=ceil((double)p[i]/(double)h);
      }
      return (th<=hr);
    }
};