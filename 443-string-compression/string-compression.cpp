class Solution {
public:
    int compress(vector<char>& chars) {
    int write = 0;
    int freq = 1;

    for (int i = 1; i <= chars.size(); i++) {
        if (i < chars.size() && chars[i] == chars[i - 1]) {
            freq++;
        } else {
            // write character
            chars[write++] = chars[i - 1];

            // write frequency
            if (freq > 1) {
                string s = to_string(freq);
                for (char c : s)
                    chars[write++] = c;
            }

            freq = 1; // reset
        }
    }

    return write;
}
};