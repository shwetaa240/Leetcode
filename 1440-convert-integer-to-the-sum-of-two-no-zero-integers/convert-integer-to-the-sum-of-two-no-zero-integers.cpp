class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans(2,0);
       int a=1,b;
       b=n-a;
       while(hasZero(a)||hasZero(b))
       {
        a++;
        b--;
       }
       ans[0]=a;
       ans[1]=b;
       return ans; 
    }
    bool hasZero(int x)
    {
        while(x!=0)
        {
            int d=x%10;
            if(d==0)
            return true;
            x/=10;
        }
        return false;
    }
};