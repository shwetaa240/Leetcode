class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       int n=intervals.size(),lstEnd=INT_MIN,cnt=0; 

       sort(intervals.begin(),intervals.end(),[](auto &a,auto &b)
       {
         return a[1]<b[1];
       });

       for(auto &x:intervals)
       {
         if(lstEnd<=x[0])
        { cnt++;
        lstEnd=x[1];
        }

       }
       return n-cnt;
    }
};