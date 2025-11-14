class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       int r=0,l=0,m=g.size(),n=s.size(),c=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(r<m && l<n)
        {
          if(g[r]<=s[l])
          {
            r++;
            c++;
          }
          l++;
        }
        return c;
    }
};