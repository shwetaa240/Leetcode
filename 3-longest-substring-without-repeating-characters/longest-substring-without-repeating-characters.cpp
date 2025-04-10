class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), i = 0, j = 0, maxi = 0, k;
        map<char, int> mpp;
        // if(s=='')
        // return 0;
        while (j < n) {
            if (mpp.find(s[j]) != mpp.end()) {
                k = mpp[s[j]];
                if(i<=k)
                { 
                 i=k+1;
                }
            }
            mpp[s[j]]=j;
            maxi = max(maxi, j - i + 1);
            j++;
        }
        
        return maxi;
    }
};