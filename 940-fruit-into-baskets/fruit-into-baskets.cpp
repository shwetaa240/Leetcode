class Solution {
public:
    int totalFruit(vector<int>& f) {
        int l = 0, r = 0, n = f.size(), res = 0;
        map<int, int> freq;

        while (r < n) {
            freq[f[r]]++;
            while (freq.size() > 2) {
                freq[f[l]]--;
                if (freq[f[l]] == 0)
                    freq.erase(f[l]);
                l++;
            }
            res = max(res, r - l + 1);
            r++;
        }
        return res;
    }
};