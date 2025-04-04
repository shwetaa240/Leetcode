class Solution {
public:
    int maxSatisfied(vector<int>& cust, vector<int>& gy, int min) {
        int i = 0, n = cust.size(), sum = 0;
        for (i = 0; i < n; i++) {
            if (gy[i] == 0) {
                sum += cust[i];
            }
        }
        i = 0;
        int j = 0;
        while (i < min) {
            if (gy[i] == 1) 
                sum += cust[i];
            i++;
        }
        i = 0;
        j = min;
        int maxi = sum;
        while (j < n)
        {
            if (gy[j] == 1)
                sum += cust[j];
            if (gy[j - min] == 1)
                sum -= cust[j - min];

            j++;
            maxi = max(maxi, sum);
        }

        return maxi;
    }
};