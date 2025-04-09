class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int i = s.size() - 2;

        // Step 1: Find first decreasing element from the right
        while (i >= 0 && s[i] >= s[i + 1]) {
            i--;
        }

        if (i == -1) return -1;  // No larger permutation possible

        // Step 2: Find element just larger than s[i]
        int j = s.size() - 1;
        while (s[j] <= s[i]) {
            j--;
        }

        // Step 3: Swap and reverse suffix
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());

        // Step 4: Convert back and check for overflow
        long long result = stoll(s);
        return (result > INT_MAX) ? -1 : (int)result;
    }
};
