class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mpp;
        for(auto num:nums)
        {
            if(!(num%2)) mpp[num]++;
        }
        int min=-1;
        mpp[min]=0;
        for(auto [n,freq]:mpp)
        {
            if(freq>mpp[min])
            min=n;
        }
        return min;
    }
};