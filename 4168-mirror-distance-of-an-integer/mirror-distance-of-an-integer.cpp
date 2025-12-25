class Solution {
public:
    int mirrorDistance(int n) {
       int rev=0,num=n,d;
       while(num!=0)
       {
        d=num%10;
        rev=rev*10+d;
        num/=10;
       } 
       return abs(n-rev);
    }
};