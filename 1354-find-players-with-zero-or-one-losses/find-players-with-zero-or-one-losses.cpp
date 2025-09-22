#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> lost;

        for (auto &m : matches) {
            if (!lost.count(m[0])) lost[m[0]] = 0;  // winners get initialized
            lost[m[1]]++;                           // losers increment
        }

        vector<int> zero, ones;
        for (auto [w,l] : lost) {
            if (l == 0) zero.push_back(w);
            else if (l == 1) ones.push_back(w);
        }

        sort(zero.begin(), zero.end());
        sort(ones.begin(), ones.end());

        return {zero, ones};
    }
};
