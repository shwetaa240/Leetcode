class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& cap) {
       int sum=0,i,c=0;
       sum=accumulate(a.begin(),a.end(),0);
       sort(cap.begin(),cap.end(),greater<int>()); 
       for(i=0;i<cap.size();i++)
       { 
        if(sum>0)
         {sum=sum-cap[i];
         c++;
       }
       if(sum==0)
       break;
       }
       return c;
    }
};