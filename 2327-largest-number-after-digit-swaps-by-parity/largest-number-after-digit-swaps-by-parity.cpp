class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        vector<int> odds, evens;

    
        for (char c : s) {
            int d = c - '0';
            if (d % 2) odds.push_back(d);
            else evens.push_back(d);
        }

        sort(odds.rbegin(), odds.rend());
        sort(evens.rbegin(), evens.rend());

        
        int oi = 0, ei = 0;
        string result;
        for (char c : s) {
            int d = c - '0';
            if (d % 2) result += char('0' + odds[oi++]);
            else result += char('0' + evens[ei++]);
        }
        return stoi(result);
    }
};
