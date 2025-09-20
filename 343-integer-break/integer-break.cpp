class Solution {
public:
    int integerBreak(int n) {

        int maxi = INT_MIN, prdct = 1, i;
        if (n == 2)
            return 1;
        if (n == 3)
            return 2;

        while (n > 4) {
            prdct *= 3;
            n = n - 3;
        }
        prdct *= n;
        return prdct;
    }
};