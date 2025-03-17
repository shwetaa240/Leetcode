class Solution {
public:
    bool isPerfectSquare(int num) {
        int a=(int)sqrt(num);
             if(a*a==num)
             return true;
             return false;
    }
};