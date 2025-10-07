class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
          int n = rains.size();
    vector<int> ans(n, 1);
    unordered_map<int, queue<int>> future;
    unordered_set<int> full;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    // Step 1: Precompute future rain days for each lake
    for (int i = 0; i < n; i++) {
        if (rains[i] > 0)
            future[rains[i]].push(i);
    }

    // Step 2: Traverse the days
    for (int i = 0; i < n; i++) {
        if (rains[i] > 0) {
            int lake = rains[i];
            if (full.count(lake)) return {}; 
            full.insert(lake);
            future[lake].pop(); 
            ans[i] = -1;

            if (!future[lake].empty()) {
                pq.push({future[lake].front(), lake});
            }

        } else {
            if (!pq.empty()) {
                auto [nextDay, lake] = pq.top();
                pq.pop();
                ans[i] = lake;   
                full.erase(lake);
            } else {
                ans[i] = 1;      
            }
        }
    }

    return ans;

    }
};