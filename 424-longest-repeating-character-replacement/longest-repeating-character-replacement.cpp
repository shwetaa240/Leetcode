class Solution {
public:
    int characterReplacement(string s, int k) {
        int r = 0, l = 0, n = s.size(), maxf = 0, maxlen = 0;
        unordered_map<char, int> mpp;

        while (r < n) {
            mpp[s[r]]++;
            maxf = max(maxf, mpp[s[r]]);
            if ((r - l + 1) - maxf > k) {
                mpp[s[l]]--;
                if (mpp[s[l]] == 0)
                    mpp.erase(s[l]);
                l++;
            }
                maxlen = max(maxlen, r - l + 1);
            r++;
        }
        return maxlen;
    }
};