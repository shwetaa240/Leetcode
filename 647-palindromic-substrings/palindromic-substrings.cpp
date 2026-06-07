class Solution {
public:

      // Expand around center (l, r) and count valid palindromes
void expand(string& s, int l, int r, int& cnt) {
    int n = s.length();
    while (l >= 0 && r < n && s[l] == s[r]) {
        cnt++;  // found one more palindromic substring
        l--;
        r++;
    }
}

int countSubstrings(string s) {
    int n = s.size(), cnt = 0;
    for (int i = 0; i < n; i++) {
        expand(s, i, i, cnt);     // odd-length palindromes
        expand(s, i, i + 1, cnt); // even-length palindromes
    }
    return cnt;
}
};

