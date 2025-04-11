class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
     int c=0,i,s;
     
     if(low<11)
     low=11;

     for(i=low;i<=high;i++)
     {
        string num=to_string(i);
        s=num.size();
        if(s%2!=0)
        continue;
        if(checkvalid(num,s))
        c++;
     }
     return c;
    }
    bool checkvalid(string num,int s)
    { int j,sum1=0,sum2=0,k;
       for(j=0;j<s/2;j++)
       {
         k=num[j]-'0';
         sum1+=k;
       }
        for(j=s/2;j<num.size();j++)
       {
         k=num[j]-'0';
         sum2+=k;
       }
       return (sum1==sum2);
    }
};
