class Solution {
public:
    vector<int> countBits(int n) {
       int i;
       vector<int> ans;
       for(i=0;i<=n;i++)
       {
        int n=__builtin_popcount(i<<0);
        ans.push_back(n);
       } 
       return ans;
    }
};