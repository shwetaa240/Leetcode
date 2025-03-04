class Solution {
public:
    bool checkPowersOfThree(int n) {
      int i=0;
      while(pow(3,i)<=n)
      i++;
      i--;
       
        while(n!=0)
        { if(pow(3,i)<=n)
            n-=pow(3,i);
         if(pow(3,i)<=n)
         return false;
         i--;
        }
        return true;
    }
};