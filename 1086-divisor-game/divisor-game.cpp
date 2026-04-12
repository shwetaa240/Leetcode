class Solution {
public:
    bool divisorGame(int n) {
        int c=0,d,x=1;
      
      while(n!=0)
      {
       if(n%x==0){
       n-=x;
       c++;
       }
      }

return (c%2==0)? true:false;
    }
};