class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int, int> mpp;
        int maxl = 0, odd = 0;
        if (s.size() == 1)
            return 1;
        for (auto& ch : s) {
            mpp[ch]++;
        }
        for (auto& [ch, val] : mpp) {
            if (val % 2 == 0) // even
                maxl += val;
            else {
                maxl += (val - 1);
                odd++;
            }
        }
        return odd > 0 ? maxl + 1 : maxl;
    }
};