class Solution {
public:
    bool valid(string temp) {
        if (temp.size() > 3 || temp.size() == 0)
            return false;

        if ((temp.size() > 1 && temp[0] == '0') || stoi(temp) > 255)
            return false;

        return true;
    }

    void solve(vector<string>& ans, string res, int ind, string s, int dots) {
        if (dots == 3) {
            string last = s.substr(ind);
            if (valid(last)) {
                ans.push_back(res + last);
            }
            return;
        }

        int sz = s.size();

        for (int i = ind; i < min(ind + 3, sz); i++) {
            string part = s.substr(ind, i - ind + 1);

            if (valid(part)) {
                solve(ans, res + part + ".", i + 1, s, dots + 1);
            }
        }
    }

    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        solve(ans, "", 0, s, 0);
        return ans;
    }
};