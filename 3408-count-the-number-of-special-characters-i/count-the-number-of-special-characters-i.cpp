class Solution {
public:
    int numberOfSpecialChars(string word) {
        int cnt = 0, l = 0, u = 0;
        for (char c = 'a'; c <= 'z'; c++)
         {
            l = 0, u = 0;
            for (char ch : word) 
            {
                if (c == ch)
                    l++;
                if (toupper(c) == ch)
                    u++;
            }
            if (l > 0 && u > 0)
                cnt++;
        }
        return cnt;
    }
};