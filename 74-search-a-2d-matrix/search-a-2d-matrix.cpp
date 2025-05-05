class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mx, int t) {
        int  m=mx.size()-1,n = mx[0].size() - 1, l = 0, u = n;
        while (l <= m && u>=0) {
            if(mx[l][u]>t)
            u--;
            else if (mx[l][u] < t) {
                l++;
            } else
               return true;
        }
        return false;
    }

}
;