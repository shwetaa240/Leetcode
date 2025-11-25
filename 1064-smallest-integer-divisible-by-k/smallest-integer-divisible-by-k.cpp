class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int n = 1, R;
        unordered_set<int> seen;
        for(int i = 1; ; i++) {
            R = n % k;                      // find remainder
            if(R == 0) return i;           
			if(seen.count(R)) return -1;    // seen again? no n exists, so return -1
            seen.insert(R);                
            n = R * 10 + 1;                
        }
        return -1;
    }
};