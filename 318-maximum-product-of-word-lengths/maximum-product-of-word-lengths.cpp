#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<string>& words) {
        unordered_map<int,int> bestLen; // mask -> max length
        for (const string &w : words) {
            int mask = 0;
            for (char c : w) mask |= 1 << (c - 'a');
            bestLen[mask] = max(bestLen[mask], (int)w.size());
        }

        vector<pair<int,int>> masks;
        masks.reserve(bestLen.size());
        for (auto &p : bestLen) masks.emplace_back(p.first, p.second);

        int m = masks.size(), ans = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = i + 1; j < m; ++j) {
                if ((masks[i].first & masks[j].first) == 0)
                    ans = max(ans, masks[i].second * masks[j].second);
            }
        }
        return ans;
    }
};
