class Solution {
public:
    string removeKdigits(string num, int k) {
        string result;

        for (char c : num) {
            while (!result.empty() && result.back() > c && k > 0) {
                result.pop_back();
                k--;
            }
            result.push_back(c);
        }

        // If k is still greater than 0, remove from the end
        while (k > 0 && !result.empty()) {
            result.pop_back();
            k--;
        }

        // Remove leading zeros
        int start = 0;
        while (start < result.size() && result[start] == '0') {
            start++;
        }

        string finalStr = result.substr(start);

        return finalStr.empty() ? "0" : finalStr;
    }
};
