class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mpp;
        priority_queue<pair<int, string>, vector<pair<int, string>>, MyComp> pq;
        vector<string> ans;
        for (auto& s : words) {
            mpp[s]++;
        }
        for (auto& [v, f] : mpp) {
            pq.push({f, v});
            if (pq.size() > k)
                pq.pop();
        }
        while (!pq.empty()) {
            ans.insert(ans.begin(), pq.top().second);
            pq.pop();
        }

        return ans;
    }

private:
    struct MyComp {
        bool operator()(const pair<int, string>& a,
                        const pair<int, string>& b) {
            if (a.first != b.first) {
                return a.first > b.first;
            } else {
                return a.second < b.second;
            }
        }
    };
};