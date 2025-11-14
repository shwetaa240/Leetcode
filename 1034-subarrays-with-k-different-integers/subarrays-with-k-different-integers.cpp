class Solution {
public:
    int subarraysWithKDistinct(vector<int>&nums, int k) {
       return goodarr(nums,k)-goodarr(nums,k-1);
    }
     int goodarr(vector<int> &f,int k)  
    {  
        int l = 0, r = 0, n = f.size(), res = 0;
        map<int, int> freq;

        while (r < n) {
            freq[f[r]]++;
            while(freq.size() > k) {
                freq[f[l]]--;
                if (freq[f[l]] == 0)
                    freq.erase(f[l]);
                l++;
            }
            res+=(r-l+1);
            r++;
        }
        return res;
    }
};