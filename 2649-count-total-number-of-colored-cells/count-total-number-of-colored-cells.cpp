class Solution {
public:
    long long coloredCells(int n) {
        long long sum=5;
        long long i=4;
        if(n==1)
        return (long long)n;
        if(n==2)
        return sum;
        n-=2;
         while(n!=0)
         {
            i=i+4;
            sum+=i;
            n--;
         }
         return sum;
    }
};