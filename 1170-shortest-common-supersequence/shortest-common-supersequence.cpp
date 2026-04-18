class Solution {
public:
    string shortestCommonSupersequence(string s1, string s2) {
        string ans = "";
        vector<vector<int>> t(1001, vector<int>(1001, 0));
        int i, j, m = s1.size(), n = s2.size();

        for (i = 1; i < m + 1; i++) {
            for (j = 1; j < n + 1; j++) {
                if (s1[i - 1] == s2[j - 1])
                    t[i][j] = 1 + t[i - 1][j - 1];
                else
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }

        i = m, j = n;

        while (i > 0 && j > 0) {
            if (s1[i - 1] == s2[j - 1]) {
                ans += s1[i - 1];
                i--;
                j--;
            } 
            else if (t[i - 1][j] > t[i][j - 1]) {
                ans += s1[i - 1];
                i--;
            }
            else {
                ans += s2[j - 1];
                j--;
            }
        }
          while (i>0){
            ans.push_back(s1[i-1]);
            i--;
        }
        while (j>0){
            ans.push_back(s2[j-1]);
            j--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

};